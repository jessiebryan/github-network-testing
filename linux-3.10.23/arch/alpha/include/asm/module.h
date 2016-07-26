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
Tue Jul 19 12:49:29 PDT 2016
Fri Jul 22 16:07:05 PDT 2016
Sun, Jul 24, 2016  4:54:09 PM
Mon, Jul 25, 2016 11:43:23 PM
