/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_MMU_H
#define __ASM_MMU_H

typedef struct {
	unsigned int id;
	raw_spinlock_t id_lock;
	void *vdso;
} mm_context_t;

#define ASID(mm)	((mm)->context.id & 0xffff)

extern void paging_init(void);
extern void setup_mm_for_reboot(void);
extern void __iomem *early_io_map(phys_addr_t phys, unsigned long virt);

#endif
Tue Jul 19 12:49:32 PDT 2016
Fri Jul 22 16:07:12 PDT 2016
Sun, Jul 24, 2016  4:54:59 PM
