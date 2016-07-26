#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:12:59 PDT 2016
Sun, Jul 24, 2016  5:38:05 PM
Tue, Jul 26, 2016 12:31:49 AM
