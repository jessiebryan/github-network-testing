/*
 * PISMO memory driver - http://www.pismoworld.org/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License.
 */
#ifndef __LINUX_MTD_PISMO_H
#define __LINUX_MTD_PISMO_H

struct pismo_pdata {
	void			(*set_vpp)(void *, int);
	void			*vpp_data;
	phys_addr_t		cs_addrs[5];
};

#endif
Tue Jul 19 12:38:20 PDT 2016
Fri Jul 22 15:46:12 PDT 2016
Sun, Jul 24, 2016  2:16:06 PM
Mon, Jul 25, 2016  8:46:59 PM
