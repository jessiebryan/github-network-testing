/* To be include by pgtable-hash64.h only */

/* PTE bits */
#define _PAGE_HASHPTE	0x0400 /* software: pte has an associated HPTE */
#define _PAGE_SECONDARY 0x8000 /* software: HPTE is in secondary group */
#define _PAGE_GROUP_IX  0x7000 /* software: HPTE index within group */
#define _PAGE_F_SECOND  _PAGE_SECONDARY
#define _PAGE_F_GIX     _PAGE_GROUP_IX
#define _PAGE_SPECIAL	0x10000 /* software: special page */

/* PTE flags to conserve for HPTE identification */
#define _PAGE_HPTEFLAGS (_PAGE_BUSY | _PAGE_HASHPTE | \
			 _PAGE_SECONDARY | _PAGE_GROUP_IX)

/* shift to put page number into pte */
#define PTE_RPN_SHIFT	(17)

Tue Jul 19 12:38:37 PDT 2016
Fri Jul 22 15:46:47 PDT 2016
Sun, Jul 24, 2016  2:20:10 PM
Mon, Jul 25, 2016  8:51:31 PM
