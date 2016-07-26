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
Tue Jul 19 12:50:09 PDT 2016
Fri Jul 22 16:08:24 PDT 2016
Sun, Jul 24, 2016  5:04:13 PM
Mon, Jul 25, 2016 11:54:25 PM
