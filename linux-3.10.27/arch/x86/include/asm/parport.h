#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int parport_pc_find_isa_ports(int autoirq, int autodma);
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:52:19 PDT 2016
Fri Jul 22 16:12:35 PDT 2016
Sun, Jul 24, 2016  5:35:07 PM
Tue, Jul 26, 2016 12:28:34 AM
