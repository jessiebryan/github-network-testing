/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1996, 99, 2003 by Ralf Baechle
 */
#ifndef _ASM_BYTEORDER_H
#define _ASM_BYTEORDER_H

#if defined(__MIPSEB__)
#include <linux/byteorder/big_endian.h>
#elif defined(__MIPSEL__)
#include <linux/byteorder/little_endian.h>
#else
# error "MIPS, but neither __MIPSEB__, nor __MIPSEL__???"
#endif

#endif /* _ASM_BYTEORDER_H */
Tue Jul 19 12:42:38 PDT 2016
Fri Jul 22 15:54:19 PDT 2016
Sun, Jul 24, 2016  3:15:03 PM
Mon, Jul 25, 2016  9:53:10 PM
