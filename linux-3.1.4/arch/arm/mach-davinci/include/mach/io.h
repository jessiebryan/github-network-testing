/*
 * DaVinci IO address definitions
 *
 * Copied from include/asm/arm/arch-omap/io.h
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_IO_H
#define __ASM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)
#define __mem_isa(a)		(a)

#ifndef __ASSEMBLER__
#define __arch_ioremap		davinci_ioremap
#define __arch_iounmap		davinci_iounmap

void __iomem *davinci_ioremap(unsigned long phys, size_t size,
			      unsigned int type);
void davinci_iounmap(volatile void __iomem *addr);
#endif
#endif /* __ASM_ARCH_IO_H */
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:49 PDT 2016
Sun, Jul 24, 2016  1:36:28 PM
Mon, Jul 25, 2016  8:00:40 PM
Tue, Jul 26, 2016  2:35:17 PM
