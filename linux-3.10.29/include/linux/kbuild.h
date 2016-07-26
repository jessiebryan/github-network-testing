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
Tue Jul 19 12:53:52 PDT 2016
Fri Jul 22 16:15:35 PDT 2016
Sun, Jul 24, 2016  5:57:13 PM
Tue, Jul 26, 2016 12:52:57 AM
