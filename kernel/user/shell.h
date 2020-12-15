#ifndef _SHELL_H_
#define _SHELL_H_
//__attribute__( (section(".user.text") ) )
 void print_prompt(void);
//__attribute__( (section(".user.text") ) ) 
static void user_readline(char* buf, int count);
//__attribute__( (section(".user.text") ) ) 
void my_shell(void);
#endif