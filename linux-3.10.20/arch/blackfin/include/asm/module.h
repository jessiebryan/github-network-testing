/*
 * Copyright 2004-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _ASM_BFIN_MODULE_H
#define _ASM_BFIN_MODULE_H

#include <asm-generic/module.h>

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
Tue Jul 19 12:47:37 PDT 2016
Fri Jul 22 16:03:37 PDT 2016
Sun, Jul 24, 2016  4:27:28 PM
Mon, Jul 25, 2016 11:13:38 PM
