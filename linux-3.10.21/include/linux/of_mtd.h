/*
 * Copyright 2012 Jean-Christophe PLAGNIOL-VILLARD <plagnioj@jcrosoft.com>
 *
 * OF helpers for mtd.
 *
 * This file is released under the GPLv2
 */

#ifndef __LINUX_OF_MTD_H
#define __LINUX_OF_NET_H

#ifdef CONFIG_OF_MTD
#include <linux/of.h>
int of_get_nand_ecc_mode(struct device_node *np);
int of_get_nand_bus_width(struct device_node *np);
bool of_get_nand_on_flash_bbt(struct device_node *np);
#endif

#endif /* __LINUX_OF_MTD_H */
Tue Jul 19 12:48:41 PDT 2016
Fri Jul 22 16:05:39 PDT 2016
Sun, Jul 24, 2016  4:43:05 PM
Mon, Jul 25, 2016 11:31:00 PM
