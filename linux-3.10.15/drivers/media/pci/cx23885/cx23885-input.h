/*
 *  Driver for the Conexant CX23885/7/8 PCIe bridge
 *
 *  Infrared remote control input device
 *
 *  Copyright (C) 2009  Andy Walls <awalls@md.metrocast.net>
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 *  02110-1301, USA.
 */

#ifndef _CX23885_INPUT_H_
#define _CX23885_INPUT_H_
void cx23885_input_rx_work_handler(struct cx23885_dev *dev, u32 events);

int cx23885_input_init(struct cx23885_dev *dev);
void cx23885_input_fini(struct cx23885_dev *dev);
#endif
Tue Jul 19 12:44:44 PDT 2016
Fri Jul 22 15:58:09 PDT 2016
Sun, Jul 24, 2016  3:44:56 PM
Mon, Jul 25, 2016 10:26:23 PM
