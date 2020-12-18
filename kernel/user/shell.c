#include "shell.h"
#include "stdio.h"
#include "user_syscall.h"
#include "string.h"
#include "buildin_cmd.h"
#define cmd_len 128	   // 最大支持键入128个字符的命令行输入
#define MAX_ARG_NR 16	   // 加上命令名外,最多支持15个参数

#define NULL (void *)0
/* 存储输入的命令 */
//__attribute__( (section(".user.data") ) )
static char cmd_line[cmd_len] = {0};

/* 用来记录当前目录,是当前目录的缓存,每次执行cd命令时会更新此内容 */
//__attribute__( (section(".user.data") ) ) 
char cwd_cache[MAX_PATH_LEN] = {0};


char final_path[MAX_PATH_LEN] = {0};      // 用于洗路径时的缓冲
static char* argv[MAX_ARG_NR];    // argv必须为全局变量，为了以后exec的程序可访问参数
int argc = -1;
//__attribute__( (section(".user.data") ) ) 
//
/* 输出提示符 */
void print_prompt(void) {
   printf("[caoye@localhost %s]$ ",cwd_cache);
}

/* 从键盘缓冲区中最多读入count个字节到buf。*/

static void user_readline(char* buf, int count) {
   char* pos = buf;
   while (read(stdin_no, pos, 1) != -1 && (pos - buf) < count) { // 在不出错情况下,直到找到回车符才返回
      switch (*pos) {
       // 找到回车或换行符后认为键入的命令结束,直接返回 
	 case '\n':
	 case '\r':
	    *pos = 0;	   // 添加cmd_line的终止字符0
	    user_print_char('\n');
	    return;

	 case '\b':
	    if (buf[0] != '\b') {		// 阻止删除非本次输入的信息
	       --pos;	   // 退回到缓冲区cmd_line中上一个字符
	       //user_print_char('\b');
          user_backtrace();
	    }
	    break;

	 // 非控制键则输出字符 
	 default:
      if(*pos!=0){
         user_print_char(*pos);
	      pos++;
      }

      }
   }
   printf("readline: can`t find enter_key in the cmd_line, max num of char is 128\n");
}
/* 分析字符串cmd_str中以token为分隔符的单词,将各单词的指针存入argv数组 */
static int cmd_parse(char* cmd_str, char** argv, char token) {
   int arg_idx = 0;
   while(arg_idx < MAX_ARG_NR) {
      argv[arg_idx] = NULL;
      arg_idx++;
   }
   char* next = cmd_str;
   int argc = 0;
   /* 外层循环处理整个命令行 */
   while(*next) {
      /* 去除命令字或参数之间的空格 */
      while(*next == token) {
	 next++;
      }
      /* 处理最后一个参数后接空格的情况,如"ls dir2 " */
      if (*next == 0) {
	 break; 
      }
      argv[argc] = next;

     /* 内层循环处理命令行中的每个命令字及参数 */
      while (*next && *next != token) {	  // 在字符串结束前找单词分隔符
	 next++;
      }

      /* 如果未结束(是token字符),使tocken变成0 */
      if (*next) {
	 *next++ = 0;	// 将token字符替换为字符串结束符0,做为一个单词的结束,并将字符指针next指向下一个字符
      }
   
      /* 避免argv数组访问越界,参数过多则返回0 */
      if (argc > MAX_ARG_NR) {
	 return -1;
      }
      argc++;
   }
   return argc;
}


/* 简单的shell */
void my_shell(void) {
   cwd_cache[0] = '/';
   cwd_cache[1] = '\0';
  /* unsigned int addr=malloc(500);
   printf("user malloc addr:%08x\n",addr);
   printf("before change:%08x",*(unsigned int *)addr);
   *(unsigned int *)addr=0xFFFFFFFF;
   printf("after change:%08x",*(unsigned int *)addr);
   free(addr,500);  //由于释放后，映射关系也会取消，导致缺页
   printf("after free:%08x",*(unsigned int *)addr);  */
   while (1) {
      print_prompt(); 
      user_memset(final_path, 0, MAX_PATH_LEN);
      user_memset(cmd_line, 0, MAX_PATH_LEN);
      user_readline(cmd_line, cmd_len);
      //printf("%s",cmd_line);
      if (cmd_line[0] == 0) {	 // 若只键入了一个回车
	        continue;
      }
      argc = -1;
      argc = cmd_parse(cmd_line, argv, ' ');
      if (argc == -1) {
         printf("num of arguments exceed %d\n", MAX_ARG_NR);
         continue;
      }
       if (!user_strcmp("ls", argv[0])) {
	      buildin_ls(argc, argv);
      } else if (!user_strcmp("cd", argv[0])) {
	 if (buildin_cd(argc, argv) != NULL) {
	    user_memset(cwd_cache, 0, MAX_PATH_LEN);
	    user_strcpy(cwd_cache, final_path);
	 }
    } else if (!user_strcmp("ps", argv[0])) {
	 buildin_ps(argc, argv);
      } else if (!user_strcmp("pwd", argv[0])) {
	 buildin_pwd(argc, argv);
      } else if (!user_strcmp("mkdir", argv[0])){
	 buildin_mkdir(argc, argv);
      } else if (!user_strcmp("rmdir", argv[0])){
	 buildin_rmdir(argc, argv);
      } else if (!user_strcmp("rm", argv[0])) {
	 buildin_rm(argc, argv);
      } else {
	 printf("external command\n");
      }
   }
}
