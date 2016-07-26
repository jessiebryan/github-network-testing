/*
 * Based on arch/arm/include/asm/compiler.h
 *
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_COMPILER_H
#define __ASM_COMPILER_H

/*
 * This is used to ensure the compiler did actually allocate the register we
 * asked it for some inline assembly sequences.  Apparently we can't trust the
 * compiler from one version to another so a bit of paranoia won't hurt.  This
 * string is meant to be concatenated with the inline asm string and will
 * cause compilation to stop on mismatch.  (for details, see gcc PR 15089)
 */
#define __asmeq(x, y)  ".ifnc " x "," y " ; .err ; .endif\n\t"

#endif	/* __ASM_COMPILER_H */
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:12 PDT 2016
Sun, Jul 24, 2016  5:32:14 PM
Tue, Jul 26, 2016 12:25:23 AM
