#ifndef ARCH__X86__MM__KMEMCHECK__PTE_H
#define ARCH__X86__MM__KMEMCHECK__PTE_H

#include <linux/mm.h>

#include <asm/pgtable.h>

pte_t *kmemcheck_pte_lookup(unsigned long address);

#endif
Tue Jul 19 12:47:49 PDT 2016
Fri Jul 22 16:03:59 PDT 2016
Sun, Jul 24, 2016  4:30:17 PM
