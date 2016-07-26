#ifndef _LIBFDT_ENV_H
#define _LIBFDT_ENV_H

#include <linux/string.h>

#include <asm/byteorder.h>

#define fdt32_to_cpu(x) be32_to_cpu(x)
#define cpu_to_fdt32(x) cpu_to_be32(x)
#define fdt64_to_cpu(x) be64_to_cpu(x)
#define cpu_to_fdt64(x) cpu_to_be64(x)

#endif /* _LIBFDT_ENV_H */
Tue Jul 19 12:50:37 PDT 2016
Fri Jul 22 16:09:16 PDT 2016
Sun, Jul 24, 2016  5:10:41 PM
Tue, Jul 26, 2016 12:01:36 AM
