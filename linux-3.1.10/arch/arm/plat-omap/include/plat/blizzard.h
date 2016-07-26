#ifndef _BLIZZARD_H
#define _BLIZZARD_H

struct blizzard_platform_data {
	void		(*power_up)(struct device *dev);
	void		(*power_down)(struct device *dev);
	unsigned long	(*get_clock_rate)(struct device *dev);

	unsigned	te_connected:1;
};

#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:26 PM
Mon, Jul 25, 2016  6:19:07 PM
Mon, Jul 25, 2016  7:32:24 PM
