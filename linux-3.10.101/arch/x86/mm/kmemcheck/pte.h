#ifndef ARCH__X86__MM__KMEMCHECK__PTE_H
#define ARCH__X86__MM__KMEMCHECK__PTE_H

#include <linux/mm.h>

#include <asm/pgtable.h>

pte_t *kmemcheck_pte_lookup(unsigned long address);

#endif
Tue Jul 19 12:40:37 PDT 2016
Fri Jul 22 15:50:45 PDT 2016
Sun, Jul 24, 2016  2:48:51 PM
Mon, Jul 25, 2016  9:23:35 PM
