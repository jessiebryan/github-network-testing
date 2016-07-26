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
Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:47 PDT 2016
Sun, Jul 24, 2016  5:21:59 PM
Tue, Jul 26, 2016 12:14:05 AM
