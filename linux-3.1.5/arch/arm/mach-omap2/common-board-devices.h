#ifndef __OMAP_COMMON_BOARD_DEVICES__
#define __OMAP_COMMON_BOARD_DEVICES__

#include "twl-common.h"

#define NAND_BLOCK_SIZE	SZ_128K

struct mtd_partition;
struct ads7846_platform_data;

void omap_ads7846_init(int bus_num, int gpio_pendown, int gpio_debounce,
		       struct ads7846_platform_data *board_pdata);
void omap_nand_flash_init(int opts, struct mtd_partition *parts, int n_parts);

#endif /* __OMAP_COMMON_BOARD_DEVICES__ */
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:58 PDT 2016
Sun, Jul 24, 2016  1:45:00 PM
Mon, Jul 25, 2016  8:10:45 PM
Tue, Jul 26, 2016  2:44:44 PM
