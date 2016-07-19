#ifndef _METAG_STRING_H_
#define _METAG_STRING_H_

#define __HAVE_ARCH_MEMSET
extern void *memset(void *__s, int __c, size_t __count);

#define __HAVE_ARCH_MEMCPY
void *memcpy(void *__to, __const__ void *__from, size_t __n);

#define __HAVE_ARCH_MEMMOVE
extern void *memmove(void *__dest, __const__ void *__src, size_t __n);

#endif /* _METAG_STRING_H_ */
Tue Jul 19 12:42:36 PDT 2016
