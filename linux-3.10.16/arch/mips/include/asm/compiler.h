/*
 * Copyright (C) 2004, 2007  Maciej W. Rozycki
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 */
#ifndef _ASM_COMPILER_H
#define _ASM_COMPILER_H

#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define GCC_IMM_ASM() "n"
#define GCC_REG_ACCUM "$0"
#else
#define GCC_IMM_ASM() "rn"
#define GCC_REG_ACCUM "accum"
#endif

#endif /* _ASM_COMPILER_H */
Tue Jul 19 12:45:11 PDT 2016
Fri Jul 22 15:59:00 PDT 2016
Sun, Jul 24, 2016  3:51:34 PM
Mon, Jul 25, 2016 10:33:46 PM
