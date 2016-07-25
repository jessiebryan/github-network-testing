/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2003, 2004 Ralf Baechle
 */
#ifndef __ASM_MACH_IP27_MANGLE_PORT_H
#define __ASM_MACH_IP27_MANGLE_PORT_H

#define __swizzle_addr_b(port)	(port)
#define __swizzle_addr_w(port)	((port) ^ 2)
#define __swizzle_addr_l(port)	(port)
#define __swizzle_addr_q(port)	(port)

# define ioswabb(a, x)		(x)
# define __mem_ioswabb(a, x)	(x)
# define ioswabw(a, x)		(x)
# define __mem_ioswabw(a, x)	cpu_to_le16(x)
# define ioswabl(a, x)		(x)
# define __mem_ioswabl(a, x)	cpu_to_le32(x)
# define ioswabq(a, x)		(x)
# define __mem_ioswabq(a, x)	cpu_to_le32(x)

#endif /* __ASM_MACH_IP27_MANGLE_PORT_H */
Tue Jul 19 12:52:52 PDT 2016
Fri Jul 22 16:13:39 PDT 2016
Sun, Jul 24, 2016  5:42:50 PM
