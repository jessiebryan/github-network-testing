#ifndef _ASM_PARISC_SCATTERLIST_H
#define _ASM_PARISC_SCATTERLIST_H

#include <asm/page.h>
#include <asm/types.h>
#include <asm-generic/scatterlist.h>

#define sg_virt_addr(sg) ((unsigned long)sg_virt(sg))

#endif /* _ASM_PARISC_SCATTERLIST_H */
Tue Jul 19 12:40:32 PDT 2016
Fri Jul 22 15:50:35 PDT 2016
