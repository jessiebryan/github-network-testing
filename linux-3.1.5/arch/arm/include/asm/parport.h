/*
 *  arch/arm/include/asm/parport.h: ARM-specific parport initialisation
 *
 *  Copyright (C) 1999, 2000  Tim Waugh <tim@cyberelk.demon.co.uk>
 *
 * This file should only be included by drivers/parport/parport_pc.c.
 */

#ifndef __ASMARM_PARPORT_H
#define __ASMARM_PARPORT_H

static int __devinit parport_pc_find_isa_ports (int autoirq, int autodma);
static int __devinit parport_pc_find_nonpci_ports (int autoirq, int autodma)
{
	return parport_pc_find_isa_ports (autoirq, autodma);
}

#endif /* !(_ASMARM_PARPORT_H) */
Tue Jul 19 12:36:03 PDT 2016
Fri Jul 22 15:41:55 PDT 2016
Sun, Jul 24, 2016  1:44:35 PM
Mon, Jul 25, 2016  8:10:15 PM
