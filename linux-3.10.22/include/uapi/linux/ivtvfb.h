/*
    On Screen Display cx23415 Framebuffer driver

    Copyright (C) 2006, 2007  Ian Armstrong <ian@iarmst.demon.co.uk>

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
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_IVTVFB_H__
#define __LINUX_IVTVFB_H__

#include <linux/compiler.h>
#include <linux/types.h>

/* Framebuffer external API */

struct ivtvfb_dma_frame {
	void __user *source;
	unsigned long dest_offset;
	int count;
};

#define IVTVFB_IOC_DMA_FRAME 	_IOW('V', BASE_VIDIOC_PRIVATE+0, struct ivtvfb_dma_frame)

#endif
Tue Jul 19 12:49:25 PDT 2016
Fri Jul 22 16:06:58 PDT 2016
Sun, Jul 24, 2016  4:53:18 PM
Mon, Jul 25, 2016 11:42:26 PM
