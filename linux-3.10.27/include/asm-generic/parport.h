#ifndef __ASM_GENERIC_PARPORT_H
#define __ASM_GENERIC_PARPORT_H

/*
 * An ISA bus may have i8255 parallel ports at well-known
 * locations in the I/O space, which are scanned by
 * parport_pc_find_isa_ports.
 *
 * Without ISA support, the driver will only attach
 * to devices on the PCI bus.
 */

static int parport_pc_find_isa_ports(int autoirq, int autodma);
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
#ifdef CONFIG_ISA
	return parport_pc_find_isa_ports(autoirq, autodma);
#else
	return 0;
#endif
}

#endif /* __ASM_GENERIC_PARPORT_H */
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:12:59 PDT 2016
Sun, Jul 24, 2016  5:38:08 PM
Tue, Jul 26, 2016 12:31:53 AM
