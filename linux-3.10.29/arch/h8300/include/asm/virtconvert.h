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
Tue Jul 19 12:53:27 PDT 2016
Fri Jul 22 16:14:48 PDT 2016
Sun, Jul 24, 2016  5:51:29 PM
Tue, Jul 26, 2016 12:46:38 AM
