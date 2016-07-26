#ifndef _LIRC_RX51_H
#define _LIRC_RX51_H

struct lirc_rx51_platform_data {
	int pwm_timer;

	int(*set_max_mpu_wakeup_lat)(struct device *dev, long t);
};

#endif
Tue Jul 19 12:44:58 PDT 2016
Fri Jul 22 15:58:34 PDT 2016
Sun, Jul 24, 2016  3:48:13 PM
Mon, Jul 25, 2016 10:30:01 PM
