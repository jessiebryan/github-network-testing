/*
 *  DS1287 timer functions.
 *
 *  Copyright (C) 2008  Yoichi Yuasa <yuasa@linux-mips.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
#ifndef __ASM_DS1287_H
#define __ASM_DS1287_H

extern int ds1287_timer_state(void);
extern void ds1287_set_base_clock(unsigned int clock);
extern int ds1287_clockevent_init(int irq);

#endif
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:44 PDT 2016
Sun, Jul 24, 2016  1:13:33 PM
Mon, Jul 25, 2016  6:20:28 PM
Mon, Jul 25, 2016  7:33:43 PM
Tue, Jul 26, 2016  2:09:50 PM
