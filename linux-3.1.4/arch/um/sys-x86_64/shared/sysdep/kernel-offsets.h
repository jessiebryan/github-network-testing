#include <linux/stddef.h>
#include <linux/sched.h>
#include <linux/time.h>
#include <linux/elf.h>
#include <linux/crypto.h>
#include <asm/page.h>
#include <asm/mman.h>

#define DEFINE(sym, val) \
	asm volatile("\n->" #sym " %0 " #val : : "i" (val))

#define DEFINE_STR1(x) #x
#define DEFINE_STR(sym, val) asm volatile("\n->" #sym " " DEFINE_STR1(val) " " #val: : )

#define BLANK() asm volatile("\n->" : : )

#define OFFSET(sym, str, mem) \
	DEFINE(sym, offsetof(struct str, mem));

void foo(void)
{
#include <common-offsets.h>
}
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:17 PDT 2016
Sun, Jul 24, 2016  1:39:45 PM
Mon, Jul 25, 2016  8:04:34 PM
