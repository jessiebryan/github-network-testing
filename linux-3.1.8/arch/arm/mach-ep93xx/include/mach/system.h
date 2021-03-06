/*
 * arch/arm/mach-ep93xx/include/mach/system.h
 */

#include <mach/hardware.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	local_irq_disable();

	/*
	 * Set then clear the SWRST bit to initiate a software reset
	 */
	ep93xx_devcfg_set_bits(EP93XX_SYSCON_DEVCFG_SWRST);
	ep93xx_devcfg_clear_bits(EP93XX_SYSCON_DEVCFG_SWRST);

	while (1)
		;
}
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:10 PDT 2016
Sun, Jul 24, 2016  2:01:15 PM
Mon, Jul 25, 2016  8:29:57 PM
