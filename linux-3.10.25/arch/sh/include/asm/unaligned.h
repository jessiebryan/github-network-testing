#ifndef _ASM_SH_UNALIGNED_H
#define _ASM_SH_UNALIGNED_H

#ifdef CONFIG_CPU_SH4A
/* SH-4A can handle unaligned loads in a relatively neutered fashion. */
#include <asm/unaligned-sh4a.h>
#else
/* Otherwise, SH can't handle unaligned accesses. */
#include <asm-generic/unaligned.h>
#endif

#endif /* _ASM_SH_UNALIGNED_H */
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:58 PDT 2016
Sun, Jul 24, 2016  5:15:56 PM
Tue, Jul 26, 2016 12:07:25 AM
