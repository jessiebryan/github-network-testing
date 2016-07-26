#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:38:53 PDT 2016
Fri Jul 22 15:47:19 PDT 2016
Sun, Jul 24, 2016  2:24:02 PM
Mon, Jul 25, 2016  8:55:49 PM
