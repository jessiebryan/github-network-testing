/*
 * Copyright (c) 2010-2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef _ASM_TLB_H
#define _ASM_TLB_H

#include <linux/pagemap.h>
#include <asm/tlbflush.h>

/*
 * We don't need any special per-pte or per-vma handling...
 */
#define tlb_start_vma(tlb, vma)				do { } while (0)
#define tlb_end_vma(tlb, vma)				do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do { } while (0)

/*
 * .. because we flush the whole mm when it fills up
 */
#define tlb_flush(tlb)		flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif
Tue Jul 19 12:42:34 PDT 2016
Fri Jul 22 15:54:12 PDT 2016
Sun, Jul 24, 2016  3:14:10 PM
Mon, Jul 25, 2016  9:52:10 PM
