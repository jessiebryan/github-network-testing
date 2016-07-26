#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int __devinit parport_pc_find_isa_ports(int autoirq, int autodma);
static int __devinit parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:02 PDT 2016
Sun, Jul 24, 2016  1:23:25 PM
Mon, Jul 25, 2016  6:32:18 PM
