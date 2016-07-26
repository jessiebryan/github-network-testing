#ifndef ARCH__X86__MM__KMEMCHECK__PTE_H
#define ARCH__X86__MM__KMEMCHECK__PTE_H

#include <linux/mm.h>

#include <asm/pgtable.h>

pte_t *kmemcheck_pte_lookup(unsigned long address);

#endif
Tue Jul 19 12:47:10 PDT 2016
Fri Jul 22 16:02:47 PDT 2016
Sun, Jul 24, 2016  4:21:02 PM
Mon, Jul 25, 2016 11:06:33 PM
