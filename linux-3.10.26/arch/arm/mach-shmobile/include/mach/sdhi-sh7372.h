#ifndef SDHI_SH7372_H
#define SDHI_SH7372_H

#define SDGENCNTA       0xfe40009c

/* The countdown of SDGENCNTA is controlled by
 * ZB3D2CLK which runs at 149.5MHz.
 * That is 149.5ticks/us. Approximate this as 150ticks/us.
 */
static void udelay(int us)
{
	__raw_writel(us * 150, SDGENCNTA);
	while(__raw_readl(SDGENCNTA)) ;
}

static void msleep(int ms)
{
	udelay(ms * 1000);
}

#endif
Tue Jul 19 12:51:28 PDT 2016
Fri Jul 22 16:10:53 PDT 2016
Sun, Jul 24, 2016  5:22:48 PM
Tue, Jul 26, 2016 12:14:58 AM
