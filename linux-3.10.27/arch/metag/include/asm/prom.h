/*
 *  arch/metag/include/asm/prom.h
 *
 *  Copyright (C) 2012 Imagination Technologies Ltd.
 *
 *  Based on ARM version:
 *  Copyright (C) 2009 Canonical Ltd. <jeremy.kerr@canonical.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
#ifndef __ASM_METAG_PROM_H
#define __ASM_METAG_PROM_H

#include <asm/setup.h>
#define HAVE_ARCH_DEVTREE_FIXUPS

extern struct machine_desc *setup_machine_fdt(void *dt);
extern void copy_fdt(void);

#endif /* __ASM_METAG_PROM_H */
Tue Jul 19 12:52:11 PDT 2016
Fri Jul 22 16:12:21 PDT 2016
Sun, Jul 24, 2016  5:33:17 PM
Tue, Jul 26, 2016 12:26:33 AM
