#ifndef __OMAP_COMMON_BOARD_DEVICES__
#define __OMAP_COMMON_BOARD_DEVICES__

#include "twl-common.h"

#define NAND_BLOCK_SIZE	SZ_128K

struct mtd_partition;
struct ads7846_platform_data;

void omap_ads7846_init(int bus_num, int gpio_pendown, int gpio_debounce,
		       struct ads7846_platform_data *board_pdata);

#endif /* __OMAP_COMMON_BOARD_DEVICES__ */
Tue Jul 19 12:47:35 PDT 2016
Fri Jul 22 16:03:33 PDT 2016
Sun, Jul 24, 2016  4:26:58 PM
Mon, Jul 25, 2016 11:13:06 PM
