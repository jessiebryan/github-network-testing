#ifndef _LIBFDT_ENV_H
#define _LIBFDT_ENV_H

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#define _B(n)	((unsigned long long)((uint8_t *)&x)[n])
static inline uint32_t fdt32_to_cpu(uint32_t x)
{
	return (_B(0) << 24) | (_B(1) << 16) | (_B(2) << 8) | _B(3);
}
#define cpu_to_fdt32(x) fdt32_to_cpu(x)

static inline uint64_t fdt64_to_cpu(uint64_t x)
{
	return (_B(0) << 56) | (_B(1) << 48) | (_B(2) << 40) | (_B(3) << 32)
		| (_B(4) << 24) | (_B(5) << 16) | (_B(6) << 8) | _B(7);
}
#define cpu_to_fdt64(x) fdt64_to_cpu(x)
#undef _B

#endif /* _LIBFDT_ENV_H */
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:31 PDT 2016
Sun, Jul 24, 2016  1:19:21 PM
Mon, Jul 25, 2016  6:27:25 PM
Mon, Jul 25, 2016  7:40:32 PM
