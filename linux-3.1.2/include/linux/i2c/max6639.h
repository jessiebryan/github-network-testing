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
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:22 PM
Mon, Jul 25, 2016  6:35:49 PM
Mon, Jul 25, 2016  7:48:46 PM
Tue, Jul 26, 2016  2:24:07 PM
