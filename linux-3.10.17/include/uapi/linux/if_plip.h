/*
 *	NET3	PLIP tuning facilities for the new Niibe PLIP.
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 *
 */
 
#ifndef _LINUX_IF_PLIP_H
#define _LINUX_IF_PLIP_H

#include <linux/sockios.h>

#define	SIOCDEVPLIP	SIOCDEVPRIVATE

struct plipconf {
	unsigned short pcmd;
	unsigned long  nibble;
	unsigned long  trigger;
};

#define PLIP_GET_TIMEOUT	0x1
#define PLIP_SET_TIMEOUT	0x2

#endif
Tue Jul 19 12:46:12 PDT 2016
Fri Jul 22 16:00:58 PDT 2016
Sun, Jul 24, 2016  4:07:08 PM
Mon, Jul 25, 2016 10:51:04 PM
