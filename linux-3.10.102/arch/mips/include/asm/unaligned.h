/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007 Ralf Baechle (ralf@linux-mips.org)
 */
#ifndef _ASM_MIPS_UNALIGNED_H
#define _ASM_MIPS_UNALIGNED_H

#include <linux/compiler.h>
#if defined(__MIPSEB__)
# include <linux/unaligned/be_struct.h>
# include <linux/unaligned/le_byteshift.h>
# define get_unaligned	__get_unaligned_be
# define put_unaligned	__put_unaligned_be
#elif defined(__MIPSEL__)
# include <linux/unaligned/le_struct.h>
# include <linux/unaligned/be_byteshift.h>
# define get_unaligned	__get_unaligned_le
# define put_unaligned	__put_unaligned_le
#else
#  error "MIPS, but neither __MIPSEB__, nor __MIPSEL__???"
#endif

# include <linux/unaligned/generic.h>

#endif /* _ASM_MIPS_UNALIGNED_H */
Tue Jul 19 12:41:10 PDT 2016
Fri Jul 22 15:51:49 PDT 2016
Sun, Jul 24, 2016  2:56:36 PM
Mon, Jul 25, 2016  9:32:20 PM
