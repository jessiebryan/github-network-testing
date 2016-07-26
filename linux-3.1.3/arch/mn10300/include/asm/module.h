/* MN10300 Arch-specific module definitions
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by Mark Salter (msalter@redhat.com)
 * Derived from include/asm-i386/module.h
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_MODULE_H
#define _ASM_MODULE_H

struct mod_arch_specific {
};

#define Elf_Shdr	Elf32_Shdr
#define Elf_Sym		Elf32_Sym
#define Elf_Ehdr	Elf32_Ehdr

/*
 * Include the MN10300 architecture version.
 */
#define MODULE_ARCH_VERMAGIC __stringify(PROCESSOR_MODEL_NAME) " "

#endif /* _ASM_MODULE_H */
Tue Jul 19 12:34:56 PDT 2016
Fri Jul 22 15:39:59 PDT 2016
Sun, Jul 24, 2016  1:30:26 PM
Mon, Jul 25, 2016  6:40:41 PM
Mon, Jul 25, 2016  7:53:31 PM
