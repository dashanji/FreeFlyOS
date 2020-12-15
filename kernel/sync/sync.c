#include "sync.h"
#include "../debug/debug.h"
#include "../interrupt/trap.h"
#include "../task/task.h"
#include "../vga/vga.h"
extern struct task_struct *current;
/* 初始化信号量 */
void sema_init(struct semaphore* psema, unsigned char value) {
   psema->value = value;       // 为信号量赋初值
   list_init(&psema->waiters); //初始化信号量的等待队列
}

/* 初始化锁plock */
void lock_init(struct lock* plock) {
   plock->holder = NULL;
   plock->holder_repeat_nr = 0;
   sema_init(&plock->semaphore, 1);  // 信号量初值为1
}

/* 信号量down操作 */
void sema_down(struct semaphore* psema) {
   /* 关中断来保证原子操作 */
   enum intr_status flag;
   list_entry_t *head=&psema->waiters;
   list_entry_t *ite=head;
   struct task_struct *task;
   //printk(" %08d\n",get_now_intr_status());
   local_intr_save(flag);
   //printk(" %08d\n",get_now_intr_status());
   {
      //printk("check 3");
      // 若value为0,表示已经被别人持有
      while(psema->value == 0) {	
         //printk("check 4");
         /* 当前线程不应该已在信号量的waiters队列中 */
         while((ite=list_next(ite))!=head){
            if(ite==&current->link){
               PANIC("sema_down: thread blocked has been in waiters_list\n");
            }
         }
            //printk("check 5");
            //task=list_to_task(list_next(&current->link),link);
            /* 若信号量的值等于0,则当前线程把自己加入该锁的等待队列,然后阻塞自己 */
            list_add_before(&psema->waiters,&current->link);
            //printk("check 6");
            //list_append(&psema->waiters, &running_thread()->general_tag); 
            //current=task;
            thread_block(STOPPED);    // 阻塞线程,直到被唤醒
            //printk("check 7");
      }
      /* 若value为1或被唤醒后,会执行下面的代码,也就是获得了锁。*/
      psema->value--;
      //ASSERT(psema->value == 0);	 
      //printk("check 8");
   }    
   /* 恢复之前的中断状态 */
   local_intr_restore(flag);
}

/* 信号量的up操作 */
void sema_up(struct semaphore* psema) {
   /* 关中断,保证原子操作 */
   enum intr_status flag;
   list_entry_t *head=&psema->waiters;
   list_entry_t *ite=head;
   //printk("sema_up \n");
   local_intr_save(flag);
   {
      //ASSERT(psema->value == 0);	    
      //释放所有等待该信号量的进程
      if((ite=list_next(ite))!=head){
         list_del(ite);
         struct task_struct* task =list_to_task(ite,link);
         thread_unblock(task);
      }
      psema->value++;
      //ASSERT(psema->value == 1);	
   } 
   /* 恢复之前的中断状态 */
   local_intr_restore(flag);
}

/* 获取锁plock */
void lock_acquire(struct lock* plock) {
/* 排除曾经自己已经持有锁但还未将其释放的情况。*/
   //printk("check 1");
   if (plock->holder != current) { 
      //printk("check 2");
      sema_down(&plock->semaphore);    // 对信号量P操作,原子操作
      plock->holder = current;
      //ASSERT(plock->holder_repeat_nr == 0);
      plock->holder_repeat_nr = 1;
   } else {
      plock->holder_repeat_nr++;
   }
}

/* 释放锁plock */
void lock_release(struct lock* plock) {
   //ASSERT(plock->holder == current);
   if (plock->holder_repeat_nr > 1) {
      plock->holder_repeat_nr--;
      return;
   }
   //ASSERT(plock->holder_repeat_nr == 1);

   plock->holder = NULL;	   // 把锁的持有者置空放在V操作之前
   plock->holder_repeat_nr = 0;
   sema_up(&plock->semaphore);	   // 信号量的V操作,也是原子操作
}
