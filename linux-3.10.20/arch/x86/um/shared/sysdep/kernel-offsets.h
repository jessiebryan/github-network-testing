#include <linux/stddef.h>
#include <linux/sched.h>
#include <linux/elf.h>
#include <linux/crypto.h>
#include <asm/mman.h>

#define DEFINE(sym, val) \
	asm volatile("\n->" #sym " %0 " #val : : "i" (val))

#define BLANK() asm volatile("\n->" : : )

#define OFFSET(sym, str, mem) \
	DEFINE(sym, offsetof(struct str, mem));

void foo(void)
{
#include <common-offsets.h>
}
Tue Jul 19 12:47:49 PDT 2016
Fri Jul 22 16:03:59 PDT 2016
Sun, Jul 24, 2016  4:30:19 PM
Mon, Jul 25, 2016 11:16:50 PM
