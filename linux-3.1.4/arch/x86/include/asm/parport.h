#ifndef _ASM_X86_PARPORT_H
#define _ASM_X86_PARPORT_H

static int __devinit parport_pc_find_isa_ports(int autoirq, int autodma);
static int __devinit parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_X86_PARPORT_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:18 PDT 2016
Sun, Jul 24, 2016  1:39:55 PM
Mon, Jul 25, 2016  8:04:45 PM
Tue, Jul 26, 2016  2:39:08 PM
