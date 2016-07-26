#ifndef _ALPHA_MODULE_H
#define _ALPHA_MODULE_H

#include <asm-generic/module.h>

struct mod_arch_specific
{
	unsigned int gotsecindex;
};

#define ARCH_SHF_SMALL SHF_ALPHA_GPREL

#ifdef MODULE
asm(".section .got,\"aws\",@progbits; .align 3; .previous");
#endif

#endif /*_ALPHA_MODULE_H*/
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:13 PDT 2016
Sun, Jul 24, 2016  2:45:02 PM
Mon, Jul 25, 2016  9:19:15 PM
