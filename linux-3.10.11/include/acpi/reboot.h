#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:42:16 PDT 2016
Fri Jul 22 15:53:40 PDT 2016
Sun, Jul 24, 2016  3:10:05 PM
Mon, Jul 25, 2016  9:47:32 PM
