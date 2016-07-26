#ifndef _ARM_LIBFDT_ENV_H
#define _ARM_LIBFDT_ENV_H

#include <linux/types.h>
#include <linux/string.h>
#include <asm/byteorder.h>

#define fdt16_to_cpu(x)		be16_to_cpu(x)
#define cpu_to_fdt16(x)		cpu_to_be16(x)
#define fdt32_to_cpu(x)		be32_to_cpu(x)
#define cpu_to_fdt32(x)		cpu_to_be32(x)
#define fdt64_to_cpu(x)		be64_to_cpu(x)
#define cpu_to_fdt64(x)		cpu_to_be64(x)

#endif
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:30 PDT 2016
Sun, Jul 24, 2016  4:26:34 PM
Mon, Jul 25, 2016 11:12:39 PM
