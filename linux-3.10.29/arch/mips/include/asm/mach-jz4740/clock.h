/*
 *  Copyright (C) 2010, Lars-Peter Clausen <lars@metafoo.de>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under  the terms of the GNU General	 Public License as published by the
 *  Free Software Foundation;  either version 2 of the License, or (at your
 *  option) any later version.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __ASM_JZ4740_CLOCK_H__
#define __ASM_JZ4740_CLOCK_H__

enum jz4740_wait_mode {
	JZ4740_WAIT_MODE_IDLE,
	JZ4740_WAIT_MODE_SLEEP,
};

void jz4740_clock_set_wait_mode(enum jz4740_wait_mode mode);

void jz4740_clock_udc_enable_auto_suspend(void);
void jz4740_clock_udc_disable_auto_suspend(void);

#endif
Tue Jul 19 12:53:30 PDT 2016
Fri Jul 22 16:14:54 PDT 2016
Sun, Jul 24, 2016  5:52:10 PM
Tue, Jul 26, 2016 12:47:24 AM
