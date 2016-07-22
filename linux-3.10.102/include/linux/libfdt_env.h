#ifndef _LIBFDT_ENV_H
#define _LIBFDT_ENV_H

#include <linux/string.h>

#include <asm/byteorder.h>

#define fdt32_to_cpu(x) be32_to_cpu(x)
#define cpu_to_fdt32(x) cpu_to_be32(x)
#define fdt64_to_cpu(x) be64_to_cpu(x)
#define cpu_to_fdt64(x) cpu_to_be64(x)

#endif /* _LIBFDT_ENV_H */
Tue Jul 19 12:41:30 PDT 2016
Fri Jul 22 15:52:32 PDT 2016
