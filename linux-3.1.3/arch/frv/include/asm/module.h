/* module.h: FRV module stuff
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */
#ifndef _ASM_MODULE_H
#define _ASM_MODULE_H

struct mod_arch_specific
{
};

#define Elf_Shdr	Elf32_Shdr
#define Elf_Sym		Elf32_Sym
#define Elf_Ehdr	Elf32_Ehdr

/*
 * Include the architecture version.
 */
#define MODULE_ARCH_VERMAGIC __stringify(PROCESSOR_MODEL_NAME) " "

#endif /* _ASM_MODULE_H */

Tue Jul 19 12:34:46 PDT 2016
Fri Jul 22 15:39:51 PDT 2016
Sun, Jul 24, 2016  1:29:29 PM
Mon, Jul 25, 2016  6:39:34 PM
Mon, Jul 25, 2016  7:52:26 PM
Tue, Jul 26, 2016  2:27:35 PM
