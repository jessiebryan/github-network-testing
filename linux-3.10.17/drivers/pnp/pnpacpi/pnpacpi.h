#ifndef ACPI_PNP_H
#define ACPI_PNP_H

#include <acpi/acpi_bus.h>
#include <linux/acpi.h>
#include <linux/pnp.h>

int pnpacpi_parse_allocated_resource(struct pnp_dev *);
int pnpacpi_parse_resource_option_data(struct pnp_dev *);
int pnpacpi_encode_resources(struct pnp_dev *, struct acpi_buffer *);
int pnpacpi_build_resource_template(struct pnp_dev *, struct acpi_buffer *);
#endif
Tue Jul 19 12:46:00 PDT 2016
Fri Jul 22 16:00:36 PDT 2016
Sun, Jul 24, 2016  4:04:12 PM
Mon, Jul 25, 2016 10:47:49 PM
