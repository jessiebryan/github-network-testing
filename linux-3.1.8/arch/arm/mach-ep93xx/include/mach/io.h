/*
 * arch/arm/mach-ep93xx/include/mach/io.h
 */

#ifndef __ASM_MACH_IO_H
#define __ASM_MACH_IO_H

#define IO_SPACE_LIMIT		0xffffffff

#define __io(p)			__typesafe_io(p)
#define __mem_pci(p)		(p)

/*
 * A typesafe __io() variation for variable initialisers
 */
#ifdef __ASSEMBLER__
#define IOMEM(p)		p
#else
#define IOMEM(p)		((void __iomem __force *)(p))
#endif

#endif /* __ASM_MACH_IO_H */
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:10 PDT 2016
Sun, Jul 24, 2016  2:01:14 PM
Mon, Jul 25, 2016  8:29:56 PM
