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
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:34 PDT 2016
Sun, Jul 24, 2016  3:40:22 PM
Mon, Jul 25, 2016 10:21:16 PM
