/*
	This is part of rtl8180 OpenSource driver - v 0.3
	Copyright (C) Andrea Merello 2004  <andreamrl@tiscali.it>
	Released under the terms of GPL (General Public Licence)

	Parts of this driver are based on the GPL part of the official realtek driver
	Parts of this driver are based on the rtl8180 driver skeleton from Patric Schenke & Andres Salomon
	Parts of this driver are based on the Intel Pro Wireless 2100 GPL driver

	We want to thank the Authors of such projects and the Ndiswrapper project Authors.
*/

/* this file (will) contains wireless extension handlers*/

#ifndef R8180_WX_H
#define R8180_WX_H
//#include <linux/wireless.h>

extern struct iw_handler_def r8192_wx_handlers_def;
/* Enable  the rtl819x_core.c to share this function, david 2008.9.22 */
extern struct iw_statistics *r8192_get_wireless_stats(struct net_device *dev);

#endif
Tue Jul 19 12:40:46 PDT 2016
Fri Jul 22 15:51:02 PDT 2016
Sun, Jul 24, 2016  2:50:54 PM
Mon, Jul 25, 2016  9:25:54 PM
