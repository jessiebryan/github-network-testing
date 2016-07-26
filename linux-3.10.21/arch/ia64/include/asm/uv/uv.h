#ifndef _ASM_IA64_UV_UV_H
#define _ASM_IA64_UV_UV_H

#include <asm/sn/simulator.h>

static inline int is_uv_system(void)
{
	/* temporary support for running on hardware simulator */
	return IS_MEDUSA() || ia64_platform_is("uv");
}

#endif	/* _ASM_IA64_UV_UV_H */
Tue Jul 19 12:48:18 PDT 2016
Fri Jul 22 16:04:53 PDT 2016
Sun, Jul 24, 2016  4:37:18 PM
Mon, Jul 25, 2016 11:24:35 PM
