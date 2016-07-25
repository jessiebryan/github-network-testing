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
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:26 PM
