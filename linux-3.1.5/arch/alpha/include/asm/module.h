#ifndef _ALPHA_MODULE_H
#define _ALPHA_MODULE_H

struct mod_arch_specific
{
	unsigned int gotsecindex;
};

#define Elf_Sym Elf64_Sym
#define Elf_Shdr Elf64_Shdr
#define Elf_Ehdr Elf64_Ehdr
#define Elf_Phdr Elf64_Phdr
#define Elf_Dyn Elf64_Dyn
#define Elf_Rel Elf64_Rel
#define Elf_Rela Elf64_Rela

#define ARCH_SHF_SMALL SHF_ALPHA_GPREL

#ifdef MODULE
asm(".section .got,\"aws\",@progbits; .align 3; .previous");
#endif

#endif /*_ALPHA_MODULE_H*/
Tue Jul 19 12:36:03 PDT 2016
Fri Jul 22 15:41:54 PDT 2016
Sun, Jul 24, 2016  1:44:28 PM
Mon, Jul 25, 2016  8:10:07 PM
