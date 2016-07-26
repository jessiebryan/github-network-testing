/*
 * Copyright 2004-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _ASM_BFIN_MODULE_H
#define _ASM_BFIN_MODULE_H

#define Elf_Shdr        Elf32_Shdr
#define Elf_Sym         Elf32_Sym
#define Elf_Ehdr        Elf32_Ehdr

struct mod_arch_specific {
	Elf_Shdr	*text_l1;
	Elf_Shdr	*data_a_l1;
	Elf_Shdr	*bss_a_l1;
	Elf_Shdr	*data_b_l1;
	Elf_Shdr	*bss_b_l1;
	Elf_Shdr	*text_l2;
	Elf_Shdr	*data_l2;
	Elf_Shdr	*bss_l2;
};
#endif				/* _ASM_BFIN_MODULE_H */
Tue Jul 19 12:36:07 PDT 2016
Fri Jul 22 15:42:04 PDT 2016
Sun, Jul 24, 2016  1:45:40 PM
Mon, Jul 25, 2016  8:11:32 PM
Tue, Jul 26, 2016  2:45:28 PM
