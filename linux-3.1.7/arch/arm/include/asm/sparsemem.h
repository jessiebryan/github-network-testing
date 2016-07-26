#ifndef ASMARM_SPARSEMEM_H
#define ASMARM_SPARSEMEM_H

#include <asm/memory.h>

/*
 * Two definitions are required for sparsemem:
 *
 * MAX_PHYSMEM_BITS: The number of physical address bits required
 *   to address the last byte of memory.
 *
 * SECTION_SIZE_BITS: The number of physical address bits to cover
 *   the maximum amount of memory in a section.
 *
 * Eg, if you have 2 banks of up to 64MB at 0x80000000, 0x84000000,
 * then MAX_PHYSMEM_BITS is 32, SECTION_SIZE_BITS is 26.
 *
 * Define these in your mach/memory.h.
 */
#if !defined(SECTION_SIZE_BITS) || !defined(MAX_PHYSMEM_BITS)
#error Sparsemem is not supported on this platform
#endif

#endif
Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:03 PDT 2016
Sun, Jul 24, 2016  1:52:51 PM
Mon, Jul 25, 2016  8:20:00 PM
