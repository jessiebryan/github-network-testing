#ifndef _ASM_IA64_SECTIONS_H
#define _ASM_IA64_SECTIONS_H

/*
 * Copyright (C) 1998-2003 Hewlett-Packard Co
 *	David Mosberger-Tang <davidm@hpl.hp.com>
 */

#include <linux/elf.h>
#include <linux/uaccess.h>
#include <asm-generic/sections.h>

extern char __per_cpu_start[], __per_cpu_end[], __phys_per_cpu_start[];
#ifdef	CONFIG_SMP
extern char __cpu0_per_cpu[];
#endif
extern char __start___vtop_patchlist[], __end___vtop_patchlist[];
extern char __start___rse_patchlist[], __end___rse_patchlist[];
extern char __start___mckinley_e9_bundles[], __end___mckinley_e9_bundles[];
extern char __start___phys_stack_reg_patchlist[], __end___phys_stack_reg_patchlist[];
extern char __start_gate_section[];
extern char __start_gate_mckinley_e9_patchlist[], __end_gate_mckinley_e9_patchlist[];
extern char __start_gate_vtop_patchlist[], __end_gate_vtop_patchlist[];
extern char __start_gate_fsyscall_patchlist[], __end_gate_fsyscall_patchlist[];
extern char __start_gate_brl_fsys_bubble_down_patchlist[], __end_gate_brl_fsys_bubble_down_patchlist[];
extern char __start_unwind[], __end_unwind[];
extern char __start_ivt_text[], __end_ivt_text[];

#undef dereference_function_descriptor
static inline void *dereference_function_descriptor(void *ptr)
{
	struct fdesc *desc = ptr;
	void *p;

	if (!probe_kernel_address(&desc->ip, p))
		ptr = p;
	return ptr;
}


#endif /* _ASM_IA64_SECTIONS_H */

Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:24 PM
Mon, Jul 25, 2016  6:29:52 PM
Mon, Jul 25, 2016  7:42:57 PM
Tue, Jul 26, 2016  2:18:39 PM
