#ifndef _BLIZZARD_H
#define _BLIZZARD_H

struct blizzard_platform_data {
	void		(*power_up)(struct device *dev);
	void		(*power_down)(struct device *dev);
	unsigned long	(*get_clock_rate)(struct device *dev);

	unsigned	te_connected:1;
};

#endif
Tue Jul 19 12:37:15 PDT 2016
Fri Jul 22 15:44:16 PDT 2016
Sun, Jul 24, 2016  2:01:55 PM
Mon, Jul 25, 2016  8:30:45 PM
