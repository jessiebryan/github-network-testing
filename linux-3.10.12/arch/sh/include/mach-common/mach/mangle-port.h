/*
 * SH version cribbed from the MIPS copy:
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2003, 2004 Ralf Baechle
 */
#ifndef __MACH_COMMON_MANGLE_PORT_H
#define __MACH_COMMON_MANGLE_PORT_H

/*
 * Sane hardware offers swapping of PCI/ISA I/O space accesses in hardware;
 * less sane hardware forces software to fiddle with this...
 *
 * Regardless, if the host bus endianness mismatches that of PCI/ISA, then
 * you can't have the numerical value of data and byte addresses within
 * multibyte quantities both preserved at the same time.  Hence two
 * variations of functions: non-prefixed ones that preserve the value
 * and prefixed ones that preserve byte addresses.  The latters are
 * typically used for moving raw data between a peripheral and memory (cf.
 * string I/O functions), hence the "__mem_" prefix.
 */
#if defined(CONFIG_SWAP_IO_SPACE)

# define ioswabb(x)		(x)
# define __mem_ioswabb(x)	(x)
# define ioswabw(x)		le16_to_cpu(x)
# define __mem_ioswabw(x)	(x)
# define ioswabl(x)		le32_to_cpu(x)
# define __mem_ioswabl(x)	(x)
# define ioswabq(x)		le64_to_cpu(x)
# define __mem_ioswabq(x)	(x)

#else

# define ioswabb(x)		(x)
# define __mem_ioswabb(x)	(x)
# define ioswabw(x)		(x)
# define __mem_ioswabw(x)	cpu_to_le16(x)
# define ioswabl(x)		(x)
# define __mem_ioswabl(x)	cpu_to_le32(x)
# define ioswabq(x)		(x)
# define __mem_ioswabq(x)	cpu_to_le32(x)

#endif

#endif /* __MACH_COMMON_MANGLE_PORT_H */
Tue Jul 19 12:42:41 PDT 2016
Fri Jul 22 15:54:25 PDT 2016
Sun, Jul 24, 2016  3:15:50 PM
Mon, Jul 25, 2016  9:54:04 PM
