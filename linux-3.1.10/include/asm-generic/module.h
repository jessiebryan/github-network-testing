#ifndef __ASM_GENERIC_MODULE_H
#define __ASM_GENERIC_MODULE_H

/*
 * Many architectures just need a simple module
 * loader without arch specific data.
 */
struct mod_arch_specific
{
};

#ifdef CONFIG_64BIT
#define Elf_Shdr Elf64_Shdr
#define Elf_Sym Elf64_Sym
#define Elf_Ehdr Elf64_Ehdr
#else
#define Elf_Shdr Elf32_Shdr
#define Elf_Sym Elf32_Sym
#define Elf_Ehdr Elf32_Ehdr
#endif

#endif /* __ASM_GENERIC_MODULE_H */
Tue Jul 19 12:33:38 PDT 2016
Fri Jul 22 15:38:18 PDT 2016
Sun, Jul 24, 2016  1:17:45 PM
Mon, Jul 25, 2016  6:25:30 PM
Mon, Jul 25, 2016  7:38:40 PM
Tue, Jul 26, 2016  2:14:33 PM
