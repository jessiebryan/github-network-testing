#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int parport_pc_find_isa_ports(int autoirq, int autodma);
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:58 PDT 2016
Sun, Jul 24, 2016  4:30:09 PM
Mon, Jul 25, 2016 11:16:39 PM
