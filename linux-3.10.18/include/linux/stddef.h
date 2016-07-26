#ifndef _LINUX_STDDEF_H
#define _LINUX_STDDEF_H

#include <uapi/linux/stddef.h>


#undef NULL
#define NULL ((void *)0)

enum {
	false	= 0,
	true	= 1
};

#undef offsetof
#ifdef __compiler_offsetof
#define offsetof(TYPE,MEMBER) __compiler_offsetof(TYPE,MEMBER)
#else
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#endif
#endif
Tue Jul 19 12:46:48 PDT 2016
Fri Jul 22 16:02:06 PDT 2016
Sun, Jul 24, 2016  4:15:41 PM
Mon, Jul 25, 2016 11:00:36 PM
