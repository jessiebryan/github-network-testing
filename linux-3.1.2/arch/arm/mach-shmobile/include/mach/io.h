#ifndef __ASM_MACH_IO_H
#define __ASM_MACH_IO_H

#define IO_SPACE_LIMIT		0xffffffff

#define __io(a)			((void __iomem *)(a))
#define __mem_pci(a)		(a)

#endif /* __ASM_MACH_IO_H */
Tue Jul 19 12:33:51 PDT 2016
