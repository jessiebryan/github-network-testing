#ifndef _BLIZZARD_H
#define _BLIZZARD_H

struct blizzard_platform_data {
	void		(*power_up)(struct device *dev);
	void		(*power_down)(struct device *dev);
	unsigned long	(*get_clock_rate)(struct device *dev);

	unsigned	te_connected:1;
};

#endif
Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:23 PDT 2016
Sun, Jul 24, 2016  2:10:09 PM
Mon, Jul 25, 2016  8:40:25 PM
