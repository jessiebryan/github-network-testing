/*
 * MDIO bus multiplexer framwork.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2011, 2012 Cavium, Inc.
 */
#ifndef __LINUX_MDIO_MUX_H
#define __LINUX_MDIO_MUX_H
#include <linux/device.h>

int mdio_mux_init(struct device *dev,
		  int (*switch_fn) (int cur, int desired, void *data),
		  void **mux_handle,
		  void *data);

void mdio_mux_uninit(void *mux_handle);

#endif /* __LINUX_MDIO_MUX_H */
Tue Jul 19 12:40:12 PDT 2016
Fri Jul 22 15:49:57 PDT 2016
Sun, Jul 24, 2016  2:43:00 PM
Mon, Jul 25, 2016  9:16:56 PM
