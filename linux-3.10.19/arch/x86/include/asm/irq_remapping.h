/*
 * Copyright (C) 2012 Advanced Micro Devices, Inc.
 * Author: Joerg Roedel <joerg.roedel@amd.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * This header file contains the interface of the interrupt remapping code to
 * the x86 interrupt management code.
 */

#ifndef __X86_IRQ_REMAPPING_H
#define __X86_IRQ_REMAPPING_H

#include <asm/io_apic.h>

struct IO_APIC_route_entry;
struct io_apic_irq_attr;
struct irq_chip;
struct msi_msg;
struct pci_dev;
struct irq_cfg;

#ifdef CONFIG_IRQ_REMAP

extern void setup_irq_remapping_ops(void);
extern int irq_remapping_supported(void);
extern void set_irq_remapping_broken(void);
extern int irq_remapping_prepare(void);
extern int irq_remapping_enable(void);
extern void irq_remapping_disable(void);
extern int irq_remapping_reenable(int);
extern int irq_remap_enable_fault_handling(void);
extern int setup_ioapic_remapped_entry(int irq,
				       struct IO_APIC_route_entry *entry,
				       unsigned int destination,
				       int vector,
				       struct io_apic_irq_attr *attr);
extern void free_remapped_irq(int irq);
extern void compose_remapped_msi_msg(struct pci_dev *pdev,
				     unsigned int irq, unsigned int dest,
				     struct msi_msg *msg, u8 hpet_id);
extern int setup_hpet_msi_remapped(unsigned int irq, unsigned int id);
extern void panic_if_irq_remap(const char *msg);
extern bool setup_remapped_irq(int irq,
			       struct irq_cfg *cfg,
			       struct irq_chip *chip);

void irq_remap_modify_chip_defaults(struct irq_chip *chip);

#else  /* CONFIG_IRQ_REMAP */

static inline void setup_irq_remapping_ops(void) { }
static inline int irq_remapping_supported(void) { return 0; }
static inline void set_irq_remapping_broken(void) { }
static inline int irq_remapping_prepare(void) { return -ENODEV; }
static inline int irq_remapping_enable(void) { return -ENODEV; }
static inline void irq_remapping_disable(void) { }
static inline int irq_remapping_reenable(int eim) { return -ENODEV; }
static inline int irq_remap_enable_fault_handling(void) { return -ENODEV; }
static inline int setup_ioapic_remapped_entry(int irq,
					      struct IO_APIC_route_entry *entry,
					      unsigned int destination,
					      int vector,
					      struct io_apic_irq_attr *attr)
{
	return -ENODEV;
}
static inline void free_remapped_irq(int irq) { }
static inline void compose_remapped_msi_msg(struct pci_dev *pdev,
					    unsigned int irq, unsigned int dest,
					    struct msi_msg *msg, u8 hpet_id)
{
}
static inline int setup_hpet_msi_remapped(unsigned int irq, unsigned int id)
{
	return -ENODEV;
}

static inline void panic_if_irq_remap(const char *msg)
{
}

static inline void irq_remap_modify_chip_defaults(struct irq_chip *chip)
{
}

static inline bool setup_remapped_irq(int irq,
				      struct irq_cfg *cfg,
				      struct irq_chip *chip)
{
	return false;
}
#endif /* CONFIG_IRQ_REMAP */

#endif /* __X86_IRQ_REMAPPING_H */
Tue Jul 19 12:47:10 PDT 2016
Fri Jul 22 16:02:46 PDT 2016
Sun, Jul 24, 2016  4:20:52 PM
Mon, Jul 25, 2016 11:06:21 PM
