/*
 * Helper functions for the PM3386s on the Radisys ENP2611
 * Copyright (C) 2004, 2005 Lennert Buytenhek <buytenh@wantstofly.org>
 * Dedicated to Marija Kulikova.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __PM3386_H
#define __PM3386_H

void pm3386_reset(void);
int pm3386_port_count(void);
void pm3386_init_port(int port);
void pm3386_get_mac(int port, u8 *mac);
void pm3386_set_mac(int port, u8 *mac);
void pm3386_get_stats(int port, struct net_device_stats *stats);
void pm3386_set_carrier(int port, int state);
int pm3386_is_link_up(int port);
void pm3386_enable_rx(int port);
void pm3386_disable_rx(int port);
void pm3386_enable_tx(int port);
void pm3386_disable_tx(int port);


#endif
Tue Jul 19 12:34:08 PDT 2016
Fri Jul 22 15:39:10 PDT 2016
Sun, Jul 24, 2016  1:24:25 PM
Mon, Jul 25, 2016  6:33:29 PM
Mon, Jul 25, 2016  7:46:29 PM
Tue, Jul 26, 2016  2:21:59 PM
