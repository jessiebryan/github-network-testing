/*
 * Xtensa doesn't handle unaligned accesses efficiently.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */
#ifndef _ASM_XTENSA_UNALIGNED_H
#define _ASM_XTENSA_UNALIGNED_H

#include <asm/byteorder.h>

#ifdef __LITTLE_ENDIAN
# include <linux/unaligned/le_struct.h>
# include <linux/unaligned/be_byteshift.h>
# include <linux/unaligned/generic.h>
# define get_unaligned	__get_unaligned_le
# define put_unaligned	__put_unaligned_le
#else
# include <linux/unaligned/be_struct.h>
# include <linux/unaligned/le_byteshift.h>
# include <linux/unaligned/generic.h>
# define get_unaligned	__get_unaligned_be
# define put_unaligned	__put_unaligned_be
#endif

#endif	/* _ASM_XTENSA_UNALIGNED_H */
Tue Jul 19 12:41:16 PDT 2016
Fri Jul 22 15:52:04 PDT 2016
Sun, Jul 24, 2016  2:58:08 PM
Mon, Jul 25, 2016  9:34:05 PM
