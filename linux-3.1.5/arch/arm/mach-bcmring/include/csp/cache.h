/*****************************************************************************
* Copyright 2003 - 2008 Broadcom Corporation.  All rights reserved.
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

#ifndef CSP_CACHE_H
#define CSP_CACHE_H

/* ---- Include Files ---------------------------------------------------- */

#include <csp/stdint.h>

/* ---- Public Constants and Types --------------------------------------- */

#if defined(__KERNEL__) && !defined(STANDALONE)
#include <asm/cacheflush.h>

#define CSP_CACHE_FLUSH_ALL      flush_cache_all()

#else

#define CSP_CACHE_FLUSH_ALL

#endif

#endif /* CSP_CACHE_H */
Tue Jul 19 12:36:03 PDT 2016
Fri Jul 22 15:41:55 PDT 2016
Sun, Jul 24, 2016  1:44:40 PM
Mon, Jul 25, 2016  8:10:21 PM
Tue, Jul 26, 2016  2:44:21 PM
