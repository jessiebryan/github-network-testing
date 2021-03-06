#ifndef _ASM_M68K_MODULE_H
#define _ASM_M68K_MODULE_H

enum m68k_fixup_type {
	m68k_fixup_memoffset,
	m68k_fixup_vnode_shift,
};

struct m68k_fixup_info {
	enum m68k_fixup_type type;
	void *addr;
};

struct mod_arch_specific {
	struct m68k_fixup_info *fixup_start, *fixup_end;
};

#ifdef CONFIG_MMU

#define MODULE_ARCH_INIT {				\
	.fixup_start		= __start_fixup,	\
	.fixup_end		= __stop_fixup,		\
}


#define m68k_fixup(type, addr)			\
	"	.section \".m68k_fixup\",\"aw\"\n"	\
	"	.long " #type "," #addr "\n"	\
	"	.previous\n"

#endif /* CONFIG_MMU */

extern struct m68k_fixup_info __start_fixup[], __stop_fixup[];

struct module;
extern void module_fixup(struct module *mod, struct m68k_fixup_info *start,
			 struct m68k_fixup_info *end);

#define Elf_Shdr Elf32_Shdr
#define Elf_Sym Elf32_Sym
#define Elf_Ehdr Elf32_Ehdr

#endif /* _ASM_M68K_MODULE_H */
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:17 PDT 2016
Sun, Jul 24, 2016  1:54:37 PM
Mon, Jul 25, 2016  8:22:05 PM
