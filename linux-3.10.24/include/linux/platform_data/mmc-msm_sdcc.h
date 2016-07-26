/*
 *  arch/arm/include/asm/mach/mmc.h
 */
#ifndef ASMARM_MACH_MMC_H
#define ASMARM_MACH_MMC_H

#include <linux/mmc/host.h>
#include <linux/mmc/card.h>
#include <linux/mmc/sdio_func.h>

struct msm_mmc_gpio {
	unsigned no;
	const char *name;
};

struct msm_mmc_gpio_data {
	struct msm_mmc_gpio *gpio;
	u8 size;
};

struct msm_mmc_platform_data {
	unsigned int ocr_mask;			/* available voltages */
	u32 (*translate_vdd)(struct device *, unsigned int);
	unsigned int (*status)(struct device *);
	int (*register_status_notify)(void (*callback)(int card_present, void *dev_id), void *dev_id);
	struct msm_mmc_gpio_data *gpio_data;
	void (*init_card)(struct mmc_card *card);
};

#endif
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:18 PDT 2016
Sun, Jul 24, 2016  5:11:01 PM
Tue, Jul 26, 2016 12:01:57 AM
