/* linux/arch/arm/mach-s3c2410/include/mach/tick.h
 *
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C2410 - timer tick support
 */

#define SRCPND_TIMER4 (1<<(IRQ_TIMER4 - IRQ_EINT0))

static inline int s3c24xx_ostimer_pending(void)
{
	return __raw_readl(S3C2410_SRCPND) & SRCPND_TIMER4;
}
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:39 PDT 2016
Sun, Jul 24, 2016  1:20:25 PM
Mon, Jul 25, 2016  6:28:41 PM
Mon, Jul 25, 2016  7:41:47 PM
Tue, Jul 26, 2016  2:17:31 PM
