#ifndef _ASM_X86_DMI_H
#define _ASM_X86_DMI_H

#include <linux/compiler.h>
#include <linux/init.h>

#include <asm/io.h>
#include <asm/setup.h>

static __always_inline __init void *dmi_alloc(unsigned len)
{
	return extend_brk(len, sizeof(int));
}

/* Use early IO mappings for DMI because it's initialized early */
#define dmi_ioremap early_ioremap
#define dmi_iounmap early_iounmap

#endif /* _ASM_X86_DMI_H */
Tue Jul 19 12:36:51 PDT 2016
Fri Jul 22 15:43:31 PDT 2016
Sun, Jul 24, 2016  1:56:20 PM
Mon, Jul 25, 2016  8:24:07 PM
