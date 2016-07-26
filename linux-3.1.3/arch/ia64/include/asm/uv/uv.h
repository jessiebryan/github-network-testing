#ifndef _ASM_IA64_UV_UV_H
#define _ASM_IA64_UV_UV_H

#include <asm/system.h>
#include <asm/sn/simulator.h>

static inline int is_uv_system(void)
{
	/* temporary support for running on hardware simulator */
	return IS_MEDUSA() || ia64_platform_is("uv");
}

#endif	/* _ASM_IA64_UV_UV_H */
Tue Jul 19 12:34:53 PDT 2016
Fri Jul 22 15:39:53 PDT 2016
Sun, Jul 24, 2016  1:29:42 PM
Mon, Jul 25, 2016  6:39:49 PM
Mon, Jul 25, 2016  7:52:41 PM
Tue, Jul 26, 2016  2:27:50 PM
