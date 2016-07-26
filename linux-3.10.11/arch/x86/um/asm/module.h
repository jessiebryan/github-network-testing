#ifndef __UM_MODULE_H
#define __UM_MODULE_H

/* UML is simple */
struct mod_arch_specific
{
};

#ifdef CONFIG_X86_32

#define Elf_Shdr Elf32_Shdr
#define Elf_Sym Elf32_Sym
#define Elf_Ehdr Elf32_Ehdr

#else

#define Elf_Shdr Elf64_Shdr
#define Elf_Sym Elf64_Sym
#define Elf_Ehdr Elf64_Ehdr

#endif

#endif
Tue Jul 19 12:42:00 PDT 2016
Fri Jul 22 15:53:18 PDT 2016
Sun, Jul 24, 2016  3:07:18 PM
Mon, Jul 25, 2016  9:44:25 PM
