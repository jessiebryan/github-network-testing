/*
 * parport.h: platform-specific PC-style parport initialisation
 *
 * Copyright (C) 1999, 2000  Tim Waugh <tim@cyberelk.demon.co.uk>
 *
 * This file should only be included by drivers/parport/parport_pc.c.
 */

#ifndef _ASM_IA64_PARPORT_H
#define _ASM_IA64_PARPORT_H 1

static int parport_pc_find_isa_ports(int autoirq, int autodma);

static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
{
	return parport_pc_find_isa_ports(autoirq, autodma);
}

#endif /* _ASM_IA64_PARPORT_H */
Tue Jul 19 12:43:13 PDT 2016
Fri Jul 22 15:55:23 PDT 2016
Sun, Jul 24, 2016  3:23:27 PM
Mon, Jul 25, 2016 10:02:29 PM
