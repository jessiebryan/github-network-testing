#ifndef _MMC_CORE_SD_H
#define _MMC_CORE_SD_H

#include <linux/mmc/card.h>

extern struct device_type sd_type;

int mmc_sd_get_cid(struct mmc_host *host, u32 ocr, u32 *cid, u32 *rocr);
int mmc_sd_get_csd(struct mmc_host *host, struct mmc_card *card);
void mmc_decode_cid(struct mmc_card *card);
int mmc_sd_setup_card(struct mmc_host *host, struct mmc_card *card,
	bool reinit);
unsigned mmc_sd_get_max_clock(struct mmc_card *card);
int mmc_sd_switch_hs(struct mmc_card *card);
void mmc_sd_go_highspeed(struct mmc_card *card);

#endif
Tue Jul 19 12:39:24 PDT 2016
Fri Jul 22 15:48:21 PDT 2016
Sun, Jul 24, 2016  2:31:27 PM
Mon, Jul 25, 2016  9:04:06 PM
