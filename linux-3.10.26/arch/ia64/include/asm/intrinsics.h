/*
 * Compiler-dependent intrinsics.
 *
 * Copyright (C) 2002-2003 Hewlett-Packard Co
 *	David Mosberger-Tang <davidm@hpl.hp.com>
 */
#ifndef _ASM_IA64_INTRINSICS_H
#define _ASM_IA64_INTRINSICS_H

#include <asm/paravirt_privop.h>
#include <uapi/asm/intrinsics.h>

#ifndef __ASSEMBLY__
#if defined(CONFIG_PARAVIRT)
# undef IA64_INTRINSIC_API
# undef IA64_INTRINSIC_MACRO
# ifdef ASM_SUPPORTED
#  define IA64_INTRINSIC_API(name)	paravirt_ ## name
# else
#  define IA64_INTRINSIC_API(name)	pv_cpu_ops.name
# endif
#define IA64_INTRINSIC_MACRO(name)	paravirt_ ## name
#endif
#endif /* !__ASSEMBLY__ */
#endif /* _ASM_IA64_INTRINSICS_H */
Tue Jul 19 12:51:32 PDT 2016
Fri Jul 22 16:11:01 PDT 2016
Sun, Jul 24, 2016  5:23:38 PM
Tue, Jul 26, 2016 12:15:53 AM
