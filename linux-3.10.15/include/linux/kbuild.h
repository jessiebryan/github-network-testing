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
Tue Jul 19 12:44:55 PDT 2016
Fri Jul 22 15:58:28 PDT 2016
Sun, Jul 24, 2016  3:47:29 PM
Mon, Jul 25, 2016 10:29:12 PM
