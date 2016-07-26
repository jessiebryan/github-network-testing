#ifndef ACPI_BUTTON_H
#define ACPI_BUTTON_H

#include <linux/notifier.h>

#if defined(CONFIG_ACPI_BUTTON) || defined(CONFIG_ACPI_BUTTON_MODULE)
extern int acpi_lid_notifier_register(struct notifier_block *nb);
extern int acpi_lid_notifier_unregister(struct notifier_block *nb);
extern int acpi_lid_open(void);
#else
static inline int acpi_lid_notifier_register(struct notifier_block *nb)
{
	return 0;
}
static inline int acpi_lid_notifier_unregister(struct notifier_block *nb)
{
	return 0;
}
static inline int acpi_lid_open(void)
{
	return 1;
}
#endif /* defined(CONFIG_ACPI_BUTTON) || defined(CONFIG_ACPI_BUTTON_MODULE) */

#endif /* ACPI_BUTTON_H */
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:28 PM
Mon, Jul 25, 2016  8:07:44 PM
Tue, Jul 26, 2016  2:41:55 PM
