#ifndef _ASM_X86_MSHYPER_H
#define _ASM_X86_MSHYPER_H

#include <linux/types.h>
#include <asm/hyperv.h>

struct ms_hyperv_info {
	u32 features;
	u32 hints;
};

extern struct ms_hyperv_info ms_hyperv;

#endif
Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:24 PDT 2016
Sun, Jul 24, 2016  1:48:09 PM
Mon, Jul 25, 2016  8:14:29 PM
