#ifndef _ASM_CRIS_INTMEM_H
#define _ASM_CRIS_INTMEM_H

void* crisv32_intmem_alloc(unsigned size, unsigned align);
void crisv32_intmem_free(void* addr);
void* crisv32_intmem_phys_to_virt(unsigned long addr);
unsigned long crisv32_intmem_virt_to_phys(void *addr);

#endif /* _ASM_CRIS_ARCH_INTMEM_H */
Tue Jul 19 12:35:34 PDT 2016
Fri Jul 22 15:40:59 PDT 2016
Sun, Jul 24, 2016  1:37:36 PM
Mon, Jul 25, 2016  8:02:00 PM
Tue, Jul 26, 2016  2:36:32 PM
