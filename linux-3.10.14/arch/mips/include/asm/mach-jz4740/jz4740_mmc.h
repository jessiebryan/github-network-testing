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
Tue Jul 19 12:43:55 PDT 2016
Fri Jul 22 15:56:38 PDT 2016
Sun, Jul 24, 2016  3:33:14 PM
Mon, Jul 25, 2016 10:13:23 PM
