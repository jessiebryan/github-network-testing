/*
 * This file contains the definitions for the TC6387XB
 *
 * (C) Copyright 2005 Ian Molton <spyro@f2s.com>
 *
 * May be copied or modified under the terms of the GNU General Public
 * License.  See linux/COPYING for more information.
 *
 */
#ifndef MFD_TC6387XB_H
#define MFD_TC6387XB_H

struct tc6387xb_platform_data {
	int (*enable)(struct platform_device *dev);
	int (*disable)(struct platform_device *dev);
	int (*suspend)(struct platform_device *dev);
	int (*resume)(struct platform_device *dev);
};

#endif
Tue Jul 19 12:42:19 PDT 2016
Fri Jul 22 15:53:45 PDT 2016
Sun, Jul 24, 2016  3:10:42 PM
Mon, Jul 25, 2016  9:48:14 PM
