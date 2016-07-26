/*
 * arch/arm/plat-orion/include/plat/mv_xor.h
 *
 * Marvell XOR platform device data definition file.
 */

#ifndef __PLAT_MV_XOR_H
#define __PLAT_MV_XOR_H

#include <linux/dmaengine.h>
#include <linux/mbus.h>

#define MV_XOR_NAME	"mv_xor"

struct mv_xor_channel_data {
	dma_cap_mask_t			cap_mask;
};

struct mv_xor_platform_data {
	struct mv_xor_channel_data    *channels;
};

#endif
Tue Jul 19 12:49:59 PDT 2016
Fri Jul 22 16:08:04 PDT 2016
Sun, Jul 24, 2016  5:01:38 PM
Mon, Jul 25, 2016 11:51:40 PM
