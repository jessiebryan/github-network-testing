#ifndef _ACPI_IO_H_
#define _ACPI_IO_H_

#include <linux/io.h>
#include <acpi/acpi.h>

static inline void __iomem *acpi_os_ioremap(acpi_physical_address phys,
					    acpi_size size)
{
       return ioremap_cache(phys, size);
}

void __iomem *acpi_os_get_iomem(acpi_physical_address phys, unsigned int size);

#endif
Tue Jul 19 12:38:18 PDT 2016
Fri Jul 22 15:46:07 PDT 2016
Sun, Jul 24, 2016  2:15:34 PM
Mon, Jul 25, 2016  8:46:24 PM
