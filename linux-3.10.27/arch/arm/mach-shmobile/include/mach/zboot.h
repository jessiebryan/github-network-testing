#ifndef ZBOOT_H
#define ZBOOT_H

#include <asm/mach-types.h>
#include <mach/zboot_macros.h>

/**************************************************
 *
 *		board specific settings
 *
 **************************************************/

#ifdef CONFIG_MACH_AP4EVB
#define MACH_TYPE	MACH_TYPE_AP4EVB
#include "mach/head-ap4evb.txt"
#elif defined(CONFIG_MACH_MACKEREL)
#define MACH_TYPE	MACH_TYPE_MACKEREL
#include "mach/head-mackerel.txt"
#else
#error "unsupported board."
#endif

#endif /* ZBOOT_H */
Tue Jul 19 12:52:06 PDT 2016
Fri Jul 22 16:12:11 PDT 2016
Sun, Jul 24, 2016  5:32:07 PM
