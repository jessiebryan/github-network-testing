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
Tue Jul 19 12:36:12 PDT 2016
Fri Jul 22 15:42:11 PDT 2016
Sun, Jul 24, 2016  1:46:38 PM
Mon, Jul 25, 2016  8:12:41 PM
Tue, Jul 26, 2016  2:46:33 PM
