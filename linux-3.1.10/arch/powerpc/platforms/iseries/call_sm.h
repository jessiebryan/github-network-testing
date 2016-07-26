/*
 * Copyright (C) 2001  Mike Corrigan IBM Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */
#ifndef _ISERIES_CALL_SM_H
#define _ISERIES_CALL_SM_H

/*
 * This file contains the "hypervisor call" interface which is used to
 * drive the hypervisor from the OS.
 */

#include <asm/iseries/hv_call_sc.h>
#include <asm/iseries/hv_types.h>

#define HvCallSmGet64BitsOfAccessMap	HvCallSm  + 11

static inline u64 HvCallSm_get64BitsOfAccessMap(HvLpIndex lpIndex,
		u64 indexIntoBitMap)
{
	return HvCall2(HvCallSmGet64BitsOfAccessMap, lpIndex, indexIntoBitMap);
}

#endif /* _ISERIES_CALL_SM_H */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:19 PM
Mon, Jul 25, 2016  6:21:23 PM
Mon, Jul 25, 2016  7:34:37 PM
Tue, Jul 26, 2016  2:10:41 PM
