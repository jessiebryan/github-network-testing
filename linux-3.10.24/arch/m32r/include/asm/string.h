#ifndef _ASM_M32R_STRING_H
#define _ASM_M32R_STRING_H

#define  __HAVE_ARCH_STRLEN
extern size_t strlen(const char * s);

#define  __HAVE_ARCH_MEMCPY
extern void *memcpy(void *__to, __const__ void *__from, size_t __n);

#define  __HAVE_ARCH_MEMSET
extern void *memset(void *__s, int __c, size_t __count);

#endif  /* _ASM_M32R_STRING_H */
Tue Jul 19 12:50:13 PDT 2016
Fri Jul 22 16:08:33 PDT 2016
Sun, Jul 24, 2016  5:05:12 PM
Mon, Jul 25, 2016 11:55:32 PM
