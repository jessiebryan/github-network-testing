/*
 * This file adds the header file glue so that the shared files
 * flatdevicetree.[ch] can compile and work in the powerpc bootwrapper.
 *
 * strncmp & strchr copied from <file:lib/string.c>
 * Copyright (C) 1991, 1992  Linus Torvalds
 *
 * Maintained by: Mark A. Greer <mgreer@mvista.com>
 */
#ifndef _PPC_BOOT_FLATDEVTREE_ENV_H_
#define _PPC_BOOT_FLATDEVTREE_ENV_H_

#include <stdarg.h>
#include <stddef.h>
#include "types.h"
#include "string.h"
#include "stdio.h"
#include "ops.h"

#define be16_to_cpu(x)		(x)
#define cpu_to_be16(x)		(x)
#define be32_to_cpu(x)		(x)
#define cpu_to_be32(x)		(x)
#define be64_to_cpu(x)		(x)
#define cpu_to_be64(x)		(x)

#endif /* _PPC_BOOT_FLATDEVTREE_ENV_H_ */
Tue Jul 19 12:33:59 PDT 2016
Fri Jul 22 15:38:54 PDT 2016
Sun, Jul 24, 2016  1:22:20 PM
Mon, Jul 25, 2016  6:30:59 PM
Mon, Jul 25, 2016  7:44:03 PM
Tue, Jul 26, 2016  2:19:41 PM
