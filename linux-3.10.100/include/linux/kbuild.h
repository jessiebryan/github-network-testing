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
Tue Jul 19 12:40:12 PDT 2016
Fri Jul 22 15:49:57 PDT 2016
Sun, Jul 24, 2016  2:42:57 PM
Mon, Jul 25, 2016  9:16:52 PM
