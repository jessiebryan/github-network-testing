#ifndef __H8300_VIRT_CONVERT__
#define __H8300_VIRT_CONVERT__

/*
 * Macros used for converting between virtual and physical mappings.
 */

#ifdef __KERNEL__

#include <asm/setup.h>
#include <asm/page.h>

#define phys_to_virt(vaddr)	((void *) (vaddr))
#define virt_to_phys(vaddr)	((unsigned long) (vaddr))

#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt

#endif
#endif
Tue Jul 19 12:45:09 PDT 2016
Fri Jul 22 15:58:55 PDT 2016
Sun, Jul 24, 2016  3:51:01 PM
Mon, Jul 25, 2016 10:33:10 PM
