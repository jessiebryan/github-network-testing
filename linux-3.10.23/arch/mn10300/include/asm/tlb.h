/* MN10300 TLB definitions
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */

#ifndef _ASM_TLB_H
#define _ASM_TLB_H

#include <asm/tlbflush.h>

extern void check_pgt_cache(void);

/*
 * we don't need any special per-pte or per-vma handling...
 */
#define tlb_start_vma(tlb, vma)				do { } while (0)
#define tlb_end_vma(tlb, vma)				do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do { } while (0)

/*
 * .. because we flush the whole mm when it fills up
 */
#define tlb_flush(tlb)	flush_tlb_mm((tlb)->mm)

/* for now, just use the generic stuff */
#include <asm-generic/tlb.h>

#endif /* _ASM_TLB_H */
Tue Jul 19 12:49:38 PDT 2016
Fri Jul 22 16:07:25 PDT 2016
Sun, Jul 24, 2016  4:56:38 PM
Mon, Jul 25, 2016 11:46:07 PM
