#ifndef _STRING_H_
#define _STRING_H_
//__attribute__( (section(".user.text") ) )  
static inline void *__memset(void *s, char c, unsigned int n);
//__attribute__( (section(".user.text") ) )  
void *user_memset(void *s, char c, unsigned int n);
char *user_strcat(char* dst_, const char* src_);
int user_strcmp(const char *s1, const char *s2);
char* user_strrchr(const char* str, const unsigned char ch);
unsigned int user_strlen(const char *s);
void *user_memcpy(void *dst, const void *src, unsigned int n);
char* user_strcpy(char* dst_, const char* src_);
#endif
