/*
 * Copyright 2004-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BLACKFIN_TLB_H
#define _BLACKFIN_TLB_H

#define tlb_start_vma(tlb, vma)	do { } while (0)
#define tlb_end_vma(tlb, vma)	do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do { } while (0)

/*
 * .. because we flush the whole mm when it
 * fills up.
 */
#define tlb_flush(tlb)		flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif				/* _BLACKFIN_TLB_H */
Tue Jul 19 12:36:07 PDT 2016
Fri Jul 22 15:42:04 PDT 2016
Sun, Jul 24, 2016  1:45:41 PM
Mon, Jul 25, 2016  8:11:34 PM
Tue, Jul 26, 2016  2:45:29 PM
