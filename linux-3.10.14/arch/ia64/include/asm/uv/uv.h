#ifndef _ASM_IA64_UV_UV_H
#define _ASM_IA64_UV_UV_H

#include <asm/sn/simulator.h>

static inline int is_uv_system(void)
{
	/* temporary support for running on hardware simulator */
	return IS_MEDUSA() || ia64_platform_is("uv");
}

#endif	/* _ASM_IA64_UV_UV_H */
Tue Jul 19 12:43:52 PDT 2016
Fri Jul 22 15:56:34 PDT 2016
Sun, Jul 24, 2016  3:32:43 PM
Mon, Jul 25, 2016 10:12:48 PM
