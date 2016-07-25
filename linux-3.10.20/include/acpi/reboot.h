#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:48:00 PDT 2016
Fri Jul 22 16:04:20 PDT 2016
Sun, Jul 24, 2016  4:33:06 PM
