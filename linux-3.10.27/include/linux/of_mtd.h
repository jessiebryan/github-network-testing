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
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:05 PDT 2016
Sun, Jul 24, 2016  5:38:51 PM
Tue, Jul 26, 2016 12:32:40 AM
