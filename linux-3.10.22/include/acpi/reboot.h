#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:49:17 PDT 2016
Fri Jul 22 16:06:45 PDT 2016
Sun, Jul 24, 2016  4:51:32 PM
Mon, Jul 25, 2016 11:40:29 PM
