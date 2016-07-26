#ifndef _LIRC_RX51_H
#define _LIRC_RX51_H

struct lirc_rx51_platform_data {
	int pwm_timer;

	int(*set_max_mpu_wakeup_lat)(struct device *dev, long t);
};

#endif
Tue Jul 19 12:40:54 PDT 2016
Fri Jul 22 15:51:18 PDT 2016
Sun, Jul 24, 2016  2:52:53 PM
Mon, Jul 25, 2016  9:28:08 PM
