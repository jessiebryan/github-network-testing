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
Tue Jul 19 12:43:10 PDT 2016
Fri Jul 22 15:55:16 PDT 2016
Sun, Jul 24, 2016  3:22:36 PM
Mon, Jul 25, 2016 10:01:33 PM
