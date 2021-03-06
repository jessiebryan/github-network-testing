/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_PGTABLE_2LEVEL_TYPES_H
#define __ASM_PGTABLE_2LEVEL_TYPES_H

typedef u64 pteval_t;
typedef u64 pgdval_t;
typedef pgdval_t pmdval_t;

#undef STRICT_MM_TYPECHECKS

#ifdef STRICT_MM_TYPECHECKS

/*
 * These are used to make use of C type-checking..
 */
typedef struct { pteval_t pte; } pte_t;
typedef struct { pgdval_t pgd; } pgd_t;
typedef struct { pteval_t pgprot; } pgprot_t;

#define pte_val(x)      ((x).pte)
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)   ((x).pgprot)

#define __pte(x)        ((pte_t) { (x) } )
#define __pgd(x)	((pgd_t) { (x) } )
#define __pgprot(x)     ((pgprot_t) { (x) } )

#else	/* !STRICT_MM_TYPECHECKS */

typedef pteval_t pte_t;
typedef pgdval_t pgd_t;
typedef pteval_t pgprot_t;

#define pte_val(x)	(x)
#define pgd_val(x)	(x)
#define pgprot_val(x)	(x)

#define __pte(x)	(x)
#define __pgd(x)	(x)
#define __pgprot(x)	(x)

#endif	/* STRICT_MM_TYPECHECKS */

#include <asm-generic/pgtable-nopmd.h>

#endif	/* __ASM_PGTABLE_2LEVEL_TYPES_H */
Tue Jul 19 12:44:28 PDT 2016
Fri Jul 22 15:57:40 PDT 2016
Sun, Jul 24, 2016  3:41:13 PM
Mon, Jul 25, 2016 10:22:13 PM
