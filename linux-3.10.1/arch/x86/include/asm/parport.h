#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int parport_pc_find_isa_ports(int autoirq, int autodma);
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:38:41 PDT 2016
Fri Jul 22 15:46:54 PDT 2016
Sun, Jul 24, 2016  2:21:06 PM
Mon, Jul 25, 2016  8:52:34 PM
