#ifndef __ASM_AVR32_MODULE_H
#define __ASM_AVR32_MODULE_H

#include <asm-generic/module.h>

struct mod_arch_syminfo {
	unsigned long got_offset;
	int got_initialized;
};

struct mod_arch_specific {
	/* Starting offset of got in the module core memory. */
	unsigned long got_offset;
	/* Size of the got. */
	unsigned long got_size;
	/* Number of symbols in syminfo. */
	int nsyms;
	/* Additional symbol information (got offsets). */
	struct mod_arch_syminfo *syminfo;
};

#define MODULE_PROC_FAMILY "AVR32v1"

#define MODULE_ARCH_VERMAGIC MODULE_PROC_FAMILY

#endif /* __ASM_AVR32_MODULE_H */
Tue Jul 19 12:47:36 PDT 2016
Fri Jul 22 16:03:36 PDT 2016
Sun, Jul 24, 2016  4:27:22 PM
Mon, Jul 25, 2016 11:13:33 PM
