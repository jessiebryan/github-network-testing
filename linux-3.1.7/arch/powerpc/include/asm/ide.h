/*
 *  Copyright (C) 1994-1996 Linus Torvalds & authors
 *
 *  This file contains the powerpc architecture specific IDE code.
 */
#ifndef _ASM_POWERPC_IDE_H
#define _ASM_POWERPC_IDE_H

#include <linux/compiler.h>
#include <asm/io.h>

#define __ide_mm_insw(p, a, c)	readsw((void __iomem *)(p), (a), (c))
#define __ide_mm_insl(p, a, c)	readsl((void __iomem *)(p), (a), (c))
#define __ide_mm_outsw(p, a, c)	writesw((void __iomem *)(p), (a), (c))
#define __ide_mm_outsl(p, a, c)	writesl((void __iomem *)(p), (a), (c))

#endif /* _ASM_POWERPC_IDE_H */
Tue Jul 19 12:36:48 PDT 2016
Fri Jul 22 15:43:24 PDT 2016
Sun, Jul 24, 2016  1:55:24 PM
Mon, Jul 25, 2016  8:23:00 PM
