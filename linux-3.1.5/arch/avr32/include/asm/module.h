#ifndef __ASM_AVR32_MODULE_H
#define __ASM_AVR32_MODULE_H

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

#define Elf_Shdr		Elf32_Shdr
#define Elf_Sym			Elf32_Sym
#define Elf_Ehdr		Elf32_Ehdr

#define MODULE_PROC_FAMILY "AVR32v1"

#define MODULE_ARCH_VERMAGIC MODULE_PROC_FAMILY

#endif /* __ASM_AVR32_MODULE_H */
Tue Jul 19 12:36:07 PDT 2016
Fri Jul 22 15:42:03 PDT 2016
Sun, Jul 24, 2016  1:45:35 PM
Mon, Jul 25, 2016  8:11:27 PM
Tue, Jul 26, 2016  2:45:23 PM
