#ifndef ARCH__X86__MM__KMEMCHECK__PTE_H
#define ARCH__X86__MM__KMEMCHECK__PTE_H

#include <linux/mm.h>

#include <asm/pgtable.h>

pte_t *kmemcheck_pte_lookup(unsigned long address);

#endif
Tue Jul 19 12:38:41 PDT 2016
Fri Jul 22 15:46:55 PDT 2016
Sun, Jul 24, 2016  2:21:15 PM
Mon, Jul 25, 2016  8:52:43 PM
