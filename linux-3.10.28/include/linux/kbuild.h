#ifndef __LINUX_KBUILD_H
#define __LINUX_KBUILD_H

#define DEFINE(sym, val) \
        asm volatile("\n->" #sym " %0 " #val : : "i" (val))

#define BLANK() asm volatile("\n->" : : )

#define OFFSET(sym, str, mem) \
	DEFINE(sym, offsetof(struct str, mem))

#define COMMENT(x) \
	asm volatile("\n->#" x)

#endif
Tue Jul 19 12:53:13 PDT 2016
Fri Jul 22 16:14:19 PDT 2016
Sun, Jul 24, 2016  5:47:55 PM
Tue, Jul 26, 2016 12:42:39 AM
