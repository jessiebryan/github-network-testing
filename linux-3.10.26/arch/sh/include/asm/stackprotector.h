#ifndef __ASM_SH_STACKPROTECTOR_H
#define __ASM_SH_STACKPROTECTOR_H

#include <linux/random.h>
#include <linux/version.h>

extern unsigned long __stack_chk_guard;

/*
 * Initialize the stackprotector canary value.
 *
 * NOTE: this must only be called from functions that never return,
 * and it must always be inlined.
 */
static __always_inline void boot_init_stack_canary(void)
{
	unsigned long canary;

	/* Try to get a semi random initial value. */
	get_random_bytes(&canary, sizeof(canary));
	canary ^= LINUX_VERSION_CODE;

	current->stack_canary = canary;
	__stack_chk_guard = current->stack_canary;
}

#endif /* __ASM_SH_STACKPROTECTOR_H */
Tue Jul 19 12:51:38 PDT 2016
Fri Jul 22 16:11:13 PDT 2016
Sun, Jul 24, 2016  5:25:13 PM
Tue, Jul 26, 2016 12:17:39 AM
