/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */
#ifndef __ASM_SH_DEVICE_H
#define __ASM_SH_DEVICE_H

#include <asm-generic/device.h>

struct platform_device;
/* allocate contiguous memory chunk and fill in struct resource */
int platform_resource_setup_memory(struct platform_device *pdev,
				   char *name, unsigned long memsize);

void plat_early_device_setup(void);

#endif /* __ASM_SH_DEVICE_H */
Tue Jul 19 12:41:13 PDT 2016
Fri Jul 22 15:51:57 PDT 2016
Sun, Jul 24, 2016  2:57:18 PM
Mon, Jul 25, 2016  9:33:08 PM
