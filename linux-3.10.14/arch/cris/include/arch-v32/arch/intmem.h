#ifndef _ASM_CRIS_INTMEM_H
#define _ASM_CRIS_INTMEM_H

void* crisv32_intmem_alloc(unsigned size, unsigned align);
void crisv32_intmem_free(void* addr);
void* crisv32_intmem_phys_to_virt(unsigned long addr);
unsigned long crisv32_intmem_virt_to_phys(void *addr);

#endif /* _ASM_CRIS_ARCH_INTMEM_H */
Tue Jul 19 12:43:51 PDT 2016
Fri Jul 22 15:56:31 PDT 2016
Sun, Jul 24, 2016  3:32:19 PM
