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
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:08 PM
Mon, Jul 25, 2016  8:08:32 PM
Tue, Jul 26, 2016  2:42:39 PM
