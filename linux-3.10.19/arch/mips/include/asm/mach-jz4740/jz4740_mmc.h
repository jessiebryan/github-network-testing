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
Tue Jul 19 12:47:04 PDT 2016
Fri Jul 22 16:02:34 PDT 2016
Sun, Jul 24, 2016  4:19:20 PM
Mon, Jul 25, 2016 11:04:40 PM
