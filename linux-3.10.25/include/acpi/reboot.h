#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:51:14 PDT 2016
Fri Jul 22 16:10:27 PDT 2016
Sun, Jul 24, 2016  5:19:28 PM
Tue, Jul 26, 2016 12:11:18 AM
