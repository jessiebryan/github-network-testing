#ifndef _CPU_DEVICE_ID
#define _CPU_DEVICE_ID 1

/*
 * Declare drivers belonging to specific x86 CPUs
 * Similar in spirit to pci_device_id and related PCI functions
 */

#include <linux/mod_devicetable.h>

extern const struct x86_cpu_id *x86_match_cpu(const struct x86_cpu_id *match);

#endif
Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:27 PDT 2016
Sun, Jul 24, 2016  2:39:26 PM
Mon, Jul 25, 2016  9:12:59 PM
