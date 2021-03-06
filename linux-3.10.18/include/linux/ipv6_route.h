/*
 *	Linux INET6 implementation 
 *
 *	Authors:
 *	Pedro Roque		<roque@di.fc.ul.pt>	
 *
 *	This program is free software; you can redistribute it and/or
 *      modify it under the terms of the GNU General Public License
 *      as published by the Free Software Foundation; either version
 *      2 of the License, or (at your option) any later version.
 */
#ifndef _LINUX_IPV6_ROUTE_H
#define _LINUX_IPV6_ROUTE_H

#include <uapi/linux/ipv6_route.h>

#define IPV6_EXTRACT_PREF(flag)	(((flag) & RTF_PREF_MASK) >> 27)
#define IPV6_DECODE_PREF(pref)	((pref) ^ 2)	/* 1:low,2:med,3:high */
#endif
Tue Jul 19 12:46:46 PDT 2016
Fri Jul 22 16:02:01 PDT 2016
Sun, Jul 24, 2016  4:15:06 PM
Mon, Jul 25, 2016 10:59:57 PM
