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
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:53 PDT 2016
Sun, Jul 24, 2016  3:42:55 PM
Mon, Jul 25, 2016 10:24:08 PM
