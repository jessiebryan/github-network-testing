#ifndef _CPU_DEVICE_ID
#define _CPU_DEVICE_ID 1

/*
 * Declare drivers belonging to specific x86 CPUs
 * Similar in spirit to pci_device_id and related PCI functions
 */

#include <linux/mod_devicetable.h>

extern const struct x86_cpu_id *x86_match_cpu(const struct x86_cpu_id *match);

#endif
Tue Jul 19 12:50:22 PDT 2016
Fri Jul 22 16:08:48 PDT 2016
Sun, Jul 24, 2016  5:07:07 PM
Mon, Jul 25, 2016 11:57:40 PM
