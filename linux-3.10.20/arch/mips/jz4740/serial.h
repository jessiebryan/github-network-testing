/*
 *  Copyright (C) 2010, Lars-Peter Clausen <lars@metafoo.de>
 *  JZ4740 serial support
 *
 *  This program is free software; you can redistribute	 it and/or modify it
 *  under  the terms of	 the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the	License, or (at your
 *  option) any later version.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __MIPS_JZ4740_SERIAL_H__
#define __MIPS_JZ4740_SERIAL_H__

struct uart_port;

void jz4740_serial_out(struct uart_port *p, int offset, int value);

#endif
Tue Jul 19 12:47:43 PDT 2016
Fri Jul 22 16:03:48 PDT 2016
Sun, Jul 24, 2016  4:28:52 PM
Mon, Jul 25, 2016 11:15:12 PM
