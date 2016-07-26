#ifndef __ACPI_REBOOT_H
#define __ACPI_REBOOT_H

#ifdef CONFIG_ACPI
extern void acpi_reboot(void);
#else
static inline void acpi_reboot(void) { }
#endif

#endif

Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:28 PM
Mon, Jul 25, 2016  8:07:44 PM
Tue, Jul 26, 2016  2:41:56 PM
