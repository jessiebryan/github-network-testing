#ifndef _BLIZZARD_H
#define _BLIZZARD_H

struct blizzard_platform_data {
	void		(*power_up)(struct device *dev);
	void		(*power_down)(struct device *dev);
	unsigned long	(*get_clock_rate)(struct device *dev);

	unsigned	te_connected:1;
};

#endif
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:02 PDT 2016
Sun, Jul 24, 2016  1:45:26 PM
Mon, Jul 25, 2016  8:11:15 PM
Tue, Jul 26, 2016  2:45:12 PM
