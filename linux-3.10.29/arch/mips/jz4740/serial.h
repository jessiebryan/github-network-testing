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
Tue Jul 19 12:53:31 PDT 2016
Fri Jul 22 16:14:56 PDT 2016
Sun, Jul 24, 2016  5:52:27 PM
Tue, Jul 26, 2016 12:47:42 AM
