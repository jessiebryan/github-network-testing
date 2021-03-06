#ifndef _ASM_PARISC_MODULE_H
#define _ASM_PARISC_MODULE_H
/*
 * This file contains the parisc architecture specific module code.
 */
#ifdef CONFIG_64BIT
#define Elf_Shdr Elf64_Shdr
#define Elf_Sym Elf64_Sym
#define Elf_Ehdr Elf64_Ehdr
#define Elf_Addr Elf64_Addr
#define Elf_Rela Elf64_Rela
#else
#define Elf_Shdr Elf32_Shdr
#define Elf_Sym Elf32_Sym
#define Elf_Ehdr Elf32_Ehdr
#define Elf_Addr Elf32_Addr
#define Elf_Rela Elf32_Rela
#endif

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
Tue Jul 19 12:37:22 PDT 2016
Fri Jul 22 15:44:30 PDT 2016
Sun, Jul 24, 2016  2:03:32 PM
Mon, Jul 25, 2016  8:32:40 PM
