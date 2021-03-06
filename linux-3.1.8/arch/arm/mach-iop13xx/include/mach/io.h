/*
 * iop13xx custom ioremap implementation
 * Copyright (c) 2005-2006, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(a) __iop13xx_io(a)
#define __mem_pci(a) (a)
#define __mem_isa(a) (a)

extern void __iomem * __iop13xx_io(unsigned long io_addr);
extern void __iomem *__iop13xx_ioremap(unsigned long cookie, size_t size,
	unsigned int mtype);
extern void __iop13xx_iounmap(void __iomem *addr);

extern u32 iop13xx_atue_mem_base;
extern u32 iop13xx_atux_mem_base;
extern size_t iop13xx_atue_mem_size;
extern size_t iop13xx_atux_mem_size;

#define __arch_ioremap	__iop13xx_ioremap
#define __arch_iounmap	__iop13xx_iounmap

#endif
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:11 PDT 2016
Sun, Jul 24, 2016  2:01:18 PM
Mon, Jul 25, 2016  8:30:00 PM
