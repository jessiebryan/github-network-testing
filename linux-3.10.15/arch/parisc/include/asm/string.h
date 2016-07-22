#ifndef _PA_STRING_H_
#define _PA_STRING_H_

#define __HAVE_ARCH_MEMSET
extern void * memset(void *, int, size_t);

#define __HAVE_ARCH_MEMCPY
void * memcpy(void * dest,const void *src,size_t count);

#endif
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:54 PDT 2016
