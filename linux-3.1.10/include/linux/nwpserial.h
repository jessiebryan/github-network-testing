/*
 *  Serial Port driver for a NWP uart device
 *
 *    Copyright (C) 2008 IBM Corp., Benjamin Krill <ben@codiert.org>
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version
 *  2 of the License, or (at your option) any later version.
 *
 */
#ifndef _NWPSERIAL_H
#define _NWPSERIAL_H

int nwpserial_register_port(struct uart_port *port);
void nwpserial_unregister_port(int line);

#endif /* _NWPSERIAL_H */
Tue Jul 19 12:33:41 PDT 2016
Fri Jul 22 15:38:24 PDT 2016
Sun, Jul 24, 2016  1:18:29 PM
Mon, Jul 25, 2016  6:26:23 PM
Mon, Jul 25, 2016  7:39:31 PM
Tue, Jul 26, 2016  2:15:22 PM
