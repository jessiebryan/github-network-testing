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
Tue Jul 19 12:38:36 PDT 2016
Fri Jul 22 15:46:45 PDT 2016
Sun, Jul 24, 2016  2:19:59 PM
Mon, Jul 25, 2016  8:51:19 PM
