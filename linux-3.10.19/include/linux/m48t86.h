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
Tue Jul 19 12:47:24 PDT 2016
Fri Jul 22 16:03:13 PDT 2016
Sun, Jul 24, 2016  4:24:25 PM
Mon, Jul 25, 2016 11:10:16 PM
