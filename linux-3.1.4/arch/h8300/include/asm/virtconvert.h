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
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:01 PDT 2016
Sun, Jul 24, 2016  1:37:50 PM
Mon, Jul 25, 2016  8:02:17 PM
Tue, Jul 26, 2016  2:36:49 PM
