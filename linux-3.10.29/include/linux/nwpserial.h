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
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:37 PDT 2016
Sun, Jul 24, 2016  5:57:28 PM
Tue, Jul 26, 2016 12:53:14 AM
