#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:36:29 PDT 2016
Fri Jul 22 15:42:45 PDT 2016
Sun, Jul 24, 2016  1:50:43 PM
Mon, Jul 25, 2016  8:17:27 PM
