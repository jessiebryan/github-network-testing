/*
 * ST M48T86 / Dallas DS12887 RTC driver
 * Copyright (c) 2006 Tower Technologies
 *
 * Author: Alessandro Zummo <a.zummo@towertech.it>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

struct m48t86_ops
{
	void (*writebyte)(unsigned char value, unsigned long addr);
	unsigned char (*readbyte)(unsigned long addr);
};
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:22 PDT 2016
Sun, Jul 24, 2016  1:18:15 PM
Mon, Jul 25, 2016  6:26:06 PM
Mon, Jul 25, 2016  7:39:15 PM
Tue, Jul 26, 2016  2:15:06 PM
