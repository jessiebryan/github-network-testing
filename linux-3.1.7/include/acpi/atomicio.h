#ifndef ACPI_ATOMIC_IO_H
#define ACPI_ATOMIC_IO_H

int acpi_pre_map_gar(struct acpi_generic_address *reg);
int acpi_post_unmap_gar(struct acpi_generic_address *reg);

int acpi_atomic_read(u64 *val, struct acpi_generic_address *reg);
int acpi_atomic_write(u64 val, struct acpi_generic_address *reg);

#endif
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:52 PDT 2016
Sun, Jul 24, 2016  1:58:57 PM
Mon, Jul 25, 2016  8:27:14 PM
