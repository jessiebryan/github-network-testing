#ifndef __ASM_MACH_TX39XX_MANGLE_PORT_H
#define __ASM_MACH_TX39XX_MANGLE_PORT_H

#if defined(CONFIG_TOSHIBA_JMR3927)
extern unsigned long (*__swizzle_addr_b)(unsigned long port);
#define NEEDS_TXX9_SWIZZLE_ADDR_B
#else
#define __swizzle_addr_b(port)	(port)
#endif
#define __swizzle_addr_w(port)	(port)
#define __swizzle_addr_l(port)	(port)
#define __swizzle_addr_q(port)	(port)

#define ioswabb(a, x)		(x)
#define __mem_ioswabb(a, x)	(x)
#define ioswabw(a, x)		le16_to_cpu(x)
#define __mem_ioswabw(a, x)	(x)
#define ioswabl(a, x)		le32_to_cpu(x)
#define __mem_ioswabl(a, x)	(x)
#define ioswabq(a, x)		le64_to_cpu(x)
#define __mem_ioswabq(a, x)	(x)

#endif /* __ASM_MACH_TX39XX_MANGLE_PORT_H */
Tue Jul 19 12:33:57 PDT 2016
Fri Jul 22 15:38:51 PDT 2016
Sun, Jul 24, 2016  1:21:57 PM
Mon, Jul 25, 2016  6:30:31 PM
Mon, Jul 25, 2016  7:43:36 PM
Tue, Jul 26, 2016  2:19:15 PM
