/******************************************************************************
 * arch/ia64/include/asm/xen/events.h
 *
 * Copyright (c) 2008 Isaku Yamahata <yamahata at valinux co jp>
 *                    VA Linux Systems Japan K.K.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#ifndef _ASM_IA64_XEN_EVENTS_H
#define _ASM_IA64_XEN_EVENTS_H

enum ipi_vector {
	XEN_RESCHEDULE_VECTOR,
	XEN_IPI_VECTOR,
	XEN_CMCP_VECTOR,
	XEN_CPEP_VECTOR,

	XEN_NR_IPIS,
};

static inline int xen_irqs_disabled(struct pt_regs *regs)
{
	return !(ia64_psr(regs)->i);
}

#define irq_ctx_init(cpu)	do { } while (0)

#endif /* _ASM_IA64_XEN_EVENTS_H */
Tue Jul 19 12:51:32 PDT 2016
Fri Jul 22 16:11:01 PDT 2016
Sun, Jul 24, 2016  5:23:42 PM
Tue, Jul 26, 2016 12:15:58 AM
