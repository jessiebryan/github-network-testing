#ifndef ARCH__X86__MM__KMEMCHECK__PTE_H
#define ARCH__X86__MM__KMEMCHECK__PTE_H

#include <linux/mm.h>

#include <asm/pgtable.h>

pte_t *kmemcheck_pte_lookup(unsigned long address);

#endif
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:23 PDT 2016
Sun, Jul 24, 2016  4:48:46 PM
Mon, Jul 25, 2016 11:37:21 PM
