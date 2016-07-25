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

#include <asm-generic/module.h>

/*
 * Include the MN10300 architecture version.
 */
#define MODULE_ARCH_VERMAGIC __stringify(PROCESSOR_MODEL_NAME) " "

#endif /* _ASM_MODULE_H */
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:38 PDT 2016
Sun, Jul 24, 2016  5:05:57 PM
