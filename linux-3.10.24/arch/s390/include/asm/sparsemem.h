#ifndef _ASM_S390_SPARSEMEM_H
#define _ASM_S390_SPARSEMEM_H

#ifdef CONFIG_64BIT

#define SECTION_SIZE_BITS	28
#define MAX_PHYSMEM_BITS	46

#else

#define SECTION_SIZE_BITS	25
#define MAX_PHYSMEM_BITS	31

#endif /* CONFIG_64BIT */

#endif /* _ASM_S390_SPARSEMEM_H */
Tue Jul 19 12:50:19 PDT 2016
Fri Jul 22 16:08:42 PDT 2016
Sun, Jul 24, 2016  5:06:26 PM
Mon, Jul 25, 2016 11:56:54 PM
