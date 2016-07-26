/*
 * arch/arm/mach-vt8500/include/mach/system.h
 *
 */
#include <asm/io.h>

/* PM Software Reset request register */
#define VT8500_PMSR_VIRT	0xf8130060

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	writel(1, VT8500_PMSR_VIRT);
}
Tue Jul 19 12:35:32 PDT 2016
Fri Jul 22 15:40:54 PDT 2016
Sun, Jul 24, 2016  1:37:06 PM
Mon, Jul 25, 2016  8:01:25 PM
Tue, Jul 26, 2016  2:35:59 PM
