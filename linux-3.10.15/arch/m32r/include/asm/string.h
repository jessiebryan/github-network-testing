#ifndef _ASM_M32R_STRING_H
#define _ASM_M32R_STRING_H

#define  __HAVE_ARCH_STRLEN
extern size_t strlen(const char * s);

#define  __HAVE_ARCH_MEMCPY
extern void *memcpy(void *__to, __const__ void *__from, size_t __n);

#define  __HAVE_ARCH_MEMSET
extern void *memset(void *__s, int __c, size_t __count);

#endif  /* _ASM_M32R_STRING_H */
Tue Jul 19 12:44:31 PDT 2016
Fri Jul 22 15:57:47 PDT 2016
Sun, Jul 24, 2016  3:42:03 PM
Mon, Jul 25, 2016 10:23:10 PM
