#ifndef __LINUX_MMC_JZ4740_MMC
#define __LINUX_MMC_JZ4740_MMC

struct jz4740_mmc_platform_data {
	int gpio_power;
	int gpio_card_detect;
	int gpio_read_only;
	unsigned card_detect_active_low:1;
	unsigned read_only_active_low:1;
	unsigned power_active_low:1;

	unsigned data_1bit:1;
};

#endif
Tue Jul 19 12:50:15 PDT 2016
Fri Jul 22 16:08:36 PDT 2016
Sun, Jul 24, 2016  5:05:38 PM
Mon, Jul 25, 2016 11:56:00 PM
