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
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:42 PDT 2016
Sun, Jul 24, 2016  1:43:01 PM
Mon, Jul 25, 2016  8:08:23 PM
Tue, Jul 26, 2016  2:42:32 PM
