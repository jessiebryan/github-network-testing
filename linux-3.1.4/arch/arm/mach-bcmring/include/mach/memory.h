/*****************************************************************************
* Copyright 2005 - 2008 Broadcom Corporation.  All rights reserved.
*
* Unless you and Broadcom execute a separate written software license
* agreement governing use of this software, this software is licensed to you
* under the terms of the GNU General Public License version 2, available at
* http://www.broadcom.com/licenses/GPLv2.php (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other Broadcom software provided under a
* license other than the GPL, without Broadcom's express prior written
* consent.
*****************************************************************************/

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#include <cfg_global.h>

/*
 * Physical vs virtual RAM address space conversion.  These are
 * private definitions which should NOT be used outside memory.h
 * files.  Use virt_to_phys/phys_to_virt/__pa/__va instead.
 */

#define PLAT_PHYS_OFFSET CFG_GLOBAL_RAM_BASE

/*
 * Maximum DMA memory allowed is 14M
 */
#define CONSISTENT_DMA_SIZE (SZ_16M - SZ_2M)

#endif
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:48 PDT 2016
Sun, Jul 24, 2016  1:36:26 PM
Mon, Jul 25, 2016  8:00:38 PM
Tue, Jul 26, 2016  2:35:15 PM
