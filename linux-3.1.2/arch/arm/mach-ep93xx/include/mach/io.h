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
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:59 PM
Mon, Jul 25, 2016  6:28:11 PM
