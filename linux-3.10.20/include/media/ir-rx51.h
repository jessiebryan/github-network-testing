#ifndef _LIRC_RX51_H
#define _LIRC_RX51_H

struct lirc_rx51_platform_data {
	int pwm_timer;

	int(*set_max_mpu_wakeup_lat)(struct device *dev, long t);
};

#endif
Tue Jul 19 12:48:05 PDT 2016
Fri Jul 22 16:04:30 PDT 2016
Sun, Jul 24, 2016  4:34:20 PM
Mon, Jul 25, 2016 11:21:17 PM
