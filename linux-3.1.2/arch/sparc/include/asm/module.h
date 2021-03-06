#ifndef __SPARC_MODULE_H
#define __SPARC_MODULE_H
struct mod_arch_specific { };

/*
 * Use some preprocessor magic to define the correct symbol
 * for sparc32 and sparc64.
 * Elf_Addr becomes Elf32_Addr for sparc32 and Elf64_Addr for sparc64
 */
#define ___ELF(a, b, c) a##b##c
#define __ELF(a, b, c)  ___ELF(a, b, c)
#define  _Elf(t)        __ELF(Elf, CONFIG_BITS, t)
#define  _ELF(t)        __ELF(ELF, CONFIG_BITS, t)

#define Elf_Shdr     _Elf(_Shdr)
#define Elf_Sym      _Elf(_Sym)
#define Elf_Ehdr     _Elf(_Ehdr)
#define Elf_Rela     _Elf(_Rela)
#define Elf_Addr     _Elf(_Addr)

#define ELF_R_SYM    _ELF(_R_SYM)
#define ELF_R_TYPE   _ELF(_R_TYPE)

#endif /* __SPARC_MODULE_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:59 PDT 2016
Sun, Jul 24, 2016  1:23:00 PM
Mon, Jul 25, 2016  6:31:47 PM
Mon, Jul 25, 2016  7:44:49 PM
Tue, Jul 26, 2016  2:20:25 PM
