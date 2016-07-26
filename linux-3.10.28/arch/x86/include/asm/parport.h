#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int parport_pc_find_isa_ports(int autoirq, int autodma);
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:52:58 PDT 2016
Fri Jul 22 16:13:52 PDT 2016
Sun, Jul 24, 2016  5:44:26 PM
Tue, Jul 26, 2016 12:38:50 AM
