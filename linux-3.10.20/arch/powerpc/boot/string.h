#ifndef _PPC_BOOT_STRING_H_
#define _PPC_BOOT_STRING_H_
#include <stddef.h>

extern char *strcpy(char *dest, const char *src);
extern char *strncpy(char *dest, const char *src, size_t n);
extern char *strcat(char *dest, const char *src);
extern char *strchr(const char *s, int c);
extern int strcmp(const char *s1, const char *s2);
extern int strncmp(const char *s1, const char *s2, size_t n);
extern size_t strlen(const char *s);
extern size_t strnlen(const char *s, size_t count);

extern void *memset(void *s, int c, size_t n);
extern void *memmove(void *dest, const void *src, unsigned long n);
extern void *memcpy(void *dest, const void *src, unsigned long n);
extern void *memchr(const void *s, int c, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);

#endif	/* _PPC_BOOT_STRING_H_ */
Tue Jul 19 12:47:44 PDT 2016
Fri Jul 22 16:03:50 PDT 2016
Sun, Jul 24, 2016  4:29:06 PM
Mon, Jul 25, 2016 11:15:28 PM
