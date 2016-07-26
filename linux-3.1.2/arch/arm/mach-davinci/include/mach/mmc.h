/*
 *  Board-specific MMC configuration
 */

#ifndef _DAVINCI_MMC_H
#define _DAVINCI_MMC_H

#include <linux/types.h>
#include <linux/mmc/host.h>

struct davinci_mmc_config {
	/* get_cd()/get_wp() may sleep */
	int	(*get_cd)(int module);
	int	(*get_ro)(int module);
	/* wires == 0 is equivalent to wires == 4 (4-bit parallel) */
	u8	wires;

	u32     max_freq;

	/* any additional host capabilities: OR'd in to mmc->f_caps */
	u32     caps;

	/* Version of the MMC/SD controller */
	u8	version;

	/* Number of sg segments */
	u8	nr_sg;
};
void davinci_setup_mmc(int module, struct davinci_mmc_config *config);

enum {
	MMC_CTLR_VERSION_1 = 0,	/* DM644x and DM355 */
	MMC_CTLR_VERSION_2,	/* DA830 */
};

#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:58 PM
Mon, Jul 25, 2016  6:28:09 PM
Mon, Jul 25, 2016  7:41:15 PM
