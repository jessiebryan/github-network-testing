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
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:48 PDT 2016
Sun, Jul 24, 2016  4:51:51 PM
Mon, Jul 25, 2016 11:40:50 PM
