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
Tue Jul 19 12:45:46 PDT 2016
Fri Jul 22 16:00:09 PDT 2016
Sun, Jul 24, 2016  4:00:40 PM
Mon, Jul 25, 2016 10:43:53 PM
