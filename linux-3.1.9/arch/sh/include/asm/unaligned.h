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
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:40 PDT 2016
Sun, Jul 24, 2016  2:12:20 PM
Mon, Jul 25, 2016  8:42:49 PM
