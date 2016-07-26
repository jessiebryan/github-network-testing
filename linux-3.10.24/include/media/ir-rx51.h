#ifndef _LIRC_RX51_H
#define _LIRC_RX51_H

struct lirc_rx51_platform_data {
	int pwm_timer;

	int(*set_max_mpu_wakeup_lat)(struct device *dev, long t);
};

#endif
Tue Jul 19 12:50:40 PDT 2016
Fri Jul 22 16:09:21 PDT 2016
Sun, Jul 24, 2016  5:11:24 PM
Tue, Jul 26, 2016 12:02:23 AM
