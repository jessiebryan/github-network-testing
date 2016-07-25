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
Tue Jul 19 12:44:02 PDT 2016
Fri Jul 22 15:56:52 PDT 2016
Sun, Jul 24, 2016  3:34:57 PM
