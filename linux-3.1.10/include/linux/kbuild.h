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
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:22 PDT 2016
Sun, Jul 24, 2016  1:18:12 PM
Mon, Jul 25, 2016  6:26:02 PM
Mon, Jul 25, 2016  7:39:12 PM
Tue, Jul 26, 2016  2:15:03 PM
