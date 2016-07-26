#ifndef _ASM_S390_MODULE_H
#define _ASM_S390_MODULE_H

#include <asm-generic/module.h>

/*
 * This file contains the s390 architecture specific module code.
 */

struct mod_arch_syminfo
{
	unsigned long got_offset;
	unsigned long plt_offset;
	int got_initialized;
	int plt_initialized;
};

struct mod_arch_specific
{
	/* Starting offset of got in the module core memory. */
	unsigned long got_offset;
	/* Starting offset of plt in the module core memory. */
	unsigned long plt_offset;
	/* Size of the got. */
	unsigned long got_size;
	/* Size of the plt. */
	unsigned long plt_size;
	/* Number of symbols in syminfo. */
	int nsyms;
	/* Additional symbol information (got and plt offsets). */
	struct mod_arch_syminfo *syminfo;
};

#endif /* _ASM_S390_MODULE_H */
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:04 PDT 2016
Sun, Jul 24, 2016  2:29:32 PM
Mon, Jul 25, 2016  9:01:58 PM
