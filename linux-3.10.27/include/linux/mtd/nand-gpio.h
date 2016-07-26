#ifndef __LINUX_MTD_NAND_GPIO_H
#define __LINUX_MTD_NAND_GPIO_H

#include <linux/mtd/nand.h>

struct gpio_nand_platdata {
	int	gpio_nce;
	int	gpio_nwp;
	int	gpio_cle;
	int	gpio_ale;
	int	gpio_rdy;
	void	(*adjust_parts)(struct gpio_nand_platdata *, size_t);
	struct mtd_partition *parts;
	unsigned int num_parts;
	unsigned int options;
	int	chip_delay;
};

#endif
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:04 PDT 2016
Sun, Jul 24, 2016  5:38:47 PM
Tue, Jul 26, 2016 12:32:36 AM
