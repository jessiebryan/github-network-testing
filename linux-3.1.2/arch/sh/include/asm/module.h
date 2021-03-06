#ifndef _ASM_SH_MODULE_H
#define _ASM_SH_MODULE_H

struct mod_arch_specific {
#ifdef CONFIG_DWARF_UNWINDER
	struct list_head fde_list;
	struct list_head cie_list;
#endif
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

#ifdef CONFIG_CPU_LITTLE_ENDIAN
# ifdef CONFIG_CPU_SH2
#  define MODULE_PROC_FAMILY "SH2LE "
# elif defined  CONFIG_CPU_SH3
#  define MODULE_PROC_FAMILY "SH3LE "
# elif defined  CONFIG_CPU_SH4
#  define MODULE_PROC_FAMILY "SH4LE "
# elif defined  CONFIG_CPU_SH5
#  define MODULE_PROC_FAMILY "SH5LE "
# else
#  error unknown processor family
# endif
#else
# ifdef CONFIG_CPU_SH2
#  define MODULE_PROC_FAMILY "SH2BE "
# elif defined  CONFIG_CPU_SH3
#  define MODULE_PROC_FAMILY "SH3BE "
# elif defined  CONFIG_CPU_SH4
#  define MODULE_PROC_FAMILY "SH4BE "
# elif defined  CONFIG_CPU_SH5
#  define MODULE_PROC_FAMILY "SH5BE "
# else
#  error unknown processor family
# endif
#endif

#define MODULE_ARCH_VERMAGIC MODULE_PROC_FAMILY

#endif /* _ASM_SH_MODULE_H */
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:48 PM
Mon, Jul 25, 2016  6:31:32 PM
Mon, Jul 25, 2016  7:44:35 PM
Tue, Jul 26, 2016  2:20:12 PM
