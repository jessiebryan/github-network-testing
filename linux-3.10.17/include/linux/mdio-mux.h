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
Tue Jul 19 12:46:07 PDT 2016
Fri Jul 22 16:00:50 PDT 2016
Sun, Jul 24, 2016  4:05:58 PM
Mon, Jul 25, 2016 10:49:47 PM
