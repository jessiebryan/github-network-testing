#ifndef __ASM_SH_STRING_64_H
#define __ASM_SH_STRING_64_H

#ifdef __KERNEL__

#define __HAVE_ARCH_MEMSET
extern void *memset(void *__s, int __c, size_t __count);

#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *dest, const void *src, size_t count);

#define __HAVE_ARCH_STRLEN
extern size_t strlen(const char *);

#define __HAVE_ARCH_STRCPY
extern char *strcpy(char *__dest, const char *__src);

#endif /* __KERNEL__ */

#endif /* __ASM_SH_STRING_64_H */
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:34 PDT 2016
Sun, Jul 24, 2016  2:04:05 PM
Mon, Jul 25, 2016  8:33:19 PM
