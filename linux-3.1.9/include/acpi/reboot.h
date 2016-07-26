#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:38:17 PDT 2016
Fri Jul 22 15:46:06 PDT 2016
Sun, Jul 24, 2016  2:15:26 PM
Mon, Jul 25, 2016  8:46:15 PM
