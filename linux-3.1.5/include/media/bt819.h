/*
    bt819.h - bt819 notifications

    Copyright (C) 2009 Hans Verkuil (hverkuil@xs4all.nl)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef _BT819_H_
#define _BT819_H_

#include <linux/ioctl.h>

/* v4l2_device notifications. */

/* Needed to reset the FIFO buffer when changing the input
   or the video standard.

   Note: these ioctls that internal to the kernel and are never called
   from userspace. */
#define BT819_FIFO_RESET_LOW 	_IO('b', 0)
#define BT819_FIFO_RESET_HIGH 	_IO('b', 1)

#endif
Tue Jul 19 12:36:33 PDT 2016
Fri Jul 22 15:42:55 PDT 2016
Sun, Jul 24, 2016  1:51:50 PM
Mon, Jul 25, 2016  8:18:48 PM
