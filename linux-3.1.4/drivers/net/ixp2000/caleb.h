/*
 * Helper functions for the SPI-3 bridge FPGA on the Radisys ENP2611
 * Copyright (C) 2004, 2005 Lennert Buytenhek <buytenh@wantstofly.org>
 * Dedicated to Marija Kulikova.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __CALEB_H
#define __CALEB_H

void caleb_reset(void);
void caleb_enable_rx(int port);
void caleb_disable_rx(int port);
void caleb_enable_tx(int port);
void caleb_disable_tx(int port);


#endif
Tue Jul 19 12:35:48 PDT 2016
Fri Jul 22 15:41:26 PDT 2016
Sun, Jul 24, 2016  1:40:54 PM
Mon, Jul 25, 2016  8:05:55 PM
