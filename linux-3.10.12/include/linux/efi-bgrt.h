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
Tue Jul 19 12:42:58 PDT 2016
Fri Jul 22 15:54:53 PDT 2016
Sun, Jul 24, 2016  3:19:35 PM
Mon, Jul 25, 2016  9:58:13 PM
