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
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:51 PM
Mon, Jul 25, 2016  6:38:48 PM
Mon, Jul 25, 2016  7:51:41 PM
Tue, Jul 26, 2016  2:26:53 PM
