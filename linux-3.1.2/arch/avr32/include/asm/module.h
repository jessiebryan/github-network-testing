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
Tue Jul 19 12:33:53 PDT 2016
Fri Jul 22 15:38:42 PDT 2016
Sun, Jul 24, 2016  1:20:50 PM
Mon, Jul 25, 2016  6:29:11 PM
Mon, Jul 25, 2016  7:42:17 PM
Tue, Jul 26, 2016  2:18:00 PM
