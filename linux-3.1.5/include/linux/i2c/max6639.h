#ifndef _LINUX_MAX6639_H
#define _LINUX_MAX6639_H

#include <linux/types.h>

/* platform data for the MAX6639 temperature sensor and fan control */

struct max6639_platform_data {
	bool pwm_polarity;	/* Polarity low (0) or high (1, default) */
	int ppr;		/* Pulses per rotation 1..4 (default == 2) */
	int rpm_range;		/* 2000, 4000 (default), 8000 or 16000 */
};

#endif /* _LINUX_MAX6639_H */
Tue Jul 19 12:36:30 PDT 2016
Fri Jul 22 15:42:49 PDT 2016
Sun, Jul 24, 2016  1:51:06 PM
Mon, Jul 25, 2016  8:17:55 PM
