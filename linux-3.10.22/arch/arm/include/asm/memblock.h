#ifndef _ASM_ARM_MEMBLOCK_H
#define _ASM_ARM_MEMBLOCK_H

struct meminfo;
struct machine_desc;

extern void arm_memblock_init(struct meminfo *, struct machine_desc *);

phys_addr_t arm_memblock_steal(phys_addr_t size, phys_addr_t align);

#endif
Tue Jul 19 12:48:49 PDT 2016
Fri Jul 22 16:05:54 PDT 2016
Sun, Jul 24, 2016  4:45:07 PM
Mon, Jul 25, 2016 11:33:18 PM
