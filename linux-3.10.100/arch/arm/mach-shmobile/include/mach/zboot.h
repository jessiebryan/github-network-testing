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
Tue Jul 19 12:39:45 PDT 2016
Fri Jul 22 15:49:03 PDT 2016
Sun, Jul 24, 2016  2:36:32 PM
Mon, Jul 25, 2016  9:09:45 PM
