#ifndef _ASM_DMI_H
#define _ASM_DMI_H 1

#include <linux/slab.h>
#include <asm/io.h>

/* Use normal IO mappings for DMI */
#define dmi_ioremap ioremap
#define dmi_iounmap(x,l) iounmap(x)
#define dmi_alloc(l) kmalloc(l, GFP_ATOMIC)

#endif
Tue Jul 19 12:44:30 PDT 2016
Fri Jul 22 15:57:46 PDT 2016
Sun, Jul 24, 2016  3:41:53 PM
Mon, Jul 25, 2016 10:22:58 PM
