#ifndef _ASM_PARISC_MODULE_H
#define _ASM_PARISC_MODULE_H

#include <asm-generic/module.h>

/*
 * This file contains the parisc architecture specific module code.
 */

struct unwind_table;

struct mod_arch_specific
{
	unsigned long got_offset, got_count, got_max;
	unsigned long fdesc_offset, fdesc_count, fdesc_max;
	struct {
		unsigned long stub_offset;
		unsigned int stub_entries;
		} *section;
	int unwind_section;
	struct unwind_table *unwind;
};

#endif /* _ASM_PARISC_MODULE_H */
Tue Jul 19 12:47:05 PDT 2016
Fri Jul 22 16:02:37 PDT 2016
Sun, Jul 24, 2016  4:19:46 PM
Mon, Jul 25, 2016 11:05:09 PM
