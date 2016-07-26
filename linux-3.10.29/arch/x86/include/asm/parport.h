#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int parport_pc_find_isa_ports(int autoirq, int autodma);
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:53:37 PDT 2016
Fri Jul 22 16:15:06 PDT 2016
Sun, Jul 24, 2016  5:53:45 PM
Tue, Jul 26, 2016 12:49:08 AM
