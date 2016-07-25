#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:43:34 PDT 2016
Fri Jul 22 15:56:02 PDT 2016
Sun, Jul 24, 2016  3:28:30 PM
