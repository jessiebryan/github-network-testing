#ifndef _PERF_ASM_UACCESS_H_
#define _PERF_ASM_UACCESS_H_

#define __get_user(src, dest)						\
({									\
	(src) = *dest;							\
	0;								\
})

#define get_user	__get_user

#define access_ok(type, addr, size)	1

#endif
Tue Jul 19 12:40:59 PDT 2016
Fri Jul 22 15:51:28 PDT 2016
Sun, Jul 24, 2016  2:54:09 PM
Mon, Jul 25, 2016  9:29:33 PM
