/*
 * Hardware definitions common to all DaVinci family processors
 *
 * Author: Kevin Hilman, Deep Root Systems, LLC
 *
 * 2007 (c) Deep Root Systems, LLC. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H

/*
 * Before you add anything to ths file:
 *
 * This header is for defines common to ALL DaVinci family chips.
 * Anything that is chip specific should go in <chipname>.h,
 * and the chip/board init code should then explicitly include
 * <chipname>.h
 */
#define DAVINCI_SYSTEM_MODULE_BASE        0x01C40000

/*
 * I/O mapping
 */
#define IO_PHYS				0x01c00000UL
#define IO_OFFSET			0xfd000000 /* Virtual IO = 0xfec00000 */
#define IO_SIZE				0x00400000
#define IO_VIRT				(IO_PHYS + IO_OFFSET)
#define io_v2p(va)			((va) - IO_OFFSET)
#define __IO_ADDRESS(x)			((x) + IO_OFFSET)
#define IO_ADDRESS(pa)			IOMEM(__IO_ADDRESS(pa))

#ifdef __ASSEMBLER__
#define IOMEM(x)                	x
#else
#define IOMEM(x)                	((void __force __iomem *)(x))
#endif

#endif /* __ASM_ARCH_HARDWARE_H */
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:49 PDT 2016
Sun, Jul 24, 2016  1:36:28 PM
Mon, Jul 25, 2016  8:00:40 PM
Tue, Jul 26, 2016  2:35:17 PM
