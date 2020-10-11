#ifndef _LIST_H_
#define _LIST_H_

#define LIST_HEAD_INIT(name） {&(name), &(name)}
#define LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)

struct list_head{
    struct list_head *next,*prev;
};

typedef struct userType{
    void *data;
    struct list_head list;
}USR_LIST_TYPE;


#endif