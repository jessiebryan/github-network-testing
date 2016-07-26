#ifndef _LINUX_EFI_BGRT_H
#define _LINUX_EFI_BGRT_H

#ifdef CONFIG_ACPI_BGRT

#include <linux/acpi.h>

void efi_bgrt_init(void);

/* The BGRT data itself; only valid if bgrt_image != NULL. */
extern void *bgrt_image;
extern size_t bgrt_image_size;
extern struct acpi_table_bgrt *bgrt_tab;

#else /* !CONFIG_ACPI_BGRT */

static inline void efi_bgrt_init(void) {}

#endif /* !CONFIG_ACPI_BGRT */

#endif /* _LINUX_EFI_BGRT_H */
Tue Jul 19 12:45:30 PDT 2016
Fri Jul 22 15:59:38 PDT 2016
Sun, Jul 24, 2016  3:56:30 PM
Mon, Jul 25, 2016 10:39:14 PM
