#ifndef LINUX_MMC_SH_MOBILE_SDHI_H
#define LINUX_MMC_SH_MOBILE_SDHI_H

#include <linux/types.h>

struct platform_device;
struct tmio_mmc_data;

struct sh_mobile_sdhi_info {
	int dma_slave_tx;
	int dma_slave_rx;
	unsigned long tmio_flags;
	unsigned long tmio_caps;
	u32 tmio_ocr_mask;	/* available MMC voltages */
	struct tmio_mmc_data *pdata;
	void (*set_pwr)(struct platform_device *pdev, int state);
	int (*get_cd)(struct platform_device *pdev);
};

#endif /* LINUX_MMC_SH_MOBILE_SDHI_H */
Tue Jul 19 12:37:05 PDT 2016
Fri Jul 22 15:43:57 PDT 2016
Sun, Jul 24, 2016  1:59:35 PM
Mon, Jul 25, 2016  8:27:59 PM
