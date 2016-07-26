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
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:30 PDT 2016
Sun, Jul 24, 2016  1:11:45 PM
Mon, Jul 25, 2016  6:18:19 PM
