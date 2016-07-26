/*
 *	watchdog_core.h
 *
 *	(c) Copyright 2008-2011 Alan Cox <alan@lxorguk.ukuu.org.uk>,
 *						All Rights Reserved.
 *
 *	(c) Copyright 2008-2011 Wim Van Sebroeck <wim@iguana.be>.
 *
 *	This source code is part of the generic code that can be used
 *	by all the watchdog timer drivers.
 *
 *	Based on source code of the following authors:
 *	  Matt Domsch <Matt_Domsch@dell.com>,
 *	  Rob Radez <rob@osinvestor.com>,
 *	  Rusty Lynch <rusty@linux.co.intel.com>
 *	  Satyam Sharma <satyam@infradead.org>
 *	  Randy Dunlap <randy.dunlap@oracle.com>
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 *
 *	Neither Alan Cox, CymruNet Ltd., Wim Van Sebroeck nor Iguana vzw.
 *	admit liability nor provide warranty for any of this software.
 *	This material is provided "AS-IS" and at no charge.
 */

/*
 *	Functions/procedures to be called by the core
 */
int watchdog_dev_register(struct watchdog_device *);
int watchdog_dev_unregister(struct watchdog_device *);
Tue Jul 19 12:34:21 PDT 2016
Fri Jul 22 15:39:20 PDT 2016
Sun, Jul 24, 2016  1:25:41 PM
Mon, Jul 25, 2016  6:35:01 PM
Mon, Jul 25, 2016  7:47:58 PM
Tue, Jul 26, 2016  2:23:22 PM
