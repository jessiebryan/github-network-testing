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
Tue Jul 19 12:48:10 PDT 2016
Fri Jul 22 16:04:40 PDT 2016
Sun, Jul 24, 2016  4:35:36 PM
Mon, Jul 25, 2016 11:22:42 PM
