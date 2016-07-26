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
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:49 PDT 2016
Sun, Jul 24, 2016  1:29:12 PM
Mon, Jul 25, 2016  6:39:12 PM
Mon, Jul 25, 2016  7:52:04 PM
