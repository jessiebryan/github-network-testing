/* 
 *
 * parport.h: ia32-compatible parport initialisation
 *
 * This file should only be included by drivers/parport/parport_pc.c.
 */
#ifndef _ASM_PARPORT_H
#define _ASM_PARPORT_H 1


static int parport_pc_find_nonpci_ports (int autoirq, int autodma)
{
	/* nothing ! */
	return 0;
}


#endif /* !(_ASM_PARPORT_H) */
Tue Jul 19 12:39:14 PDT 2016
Fri Jul 22 15:48:01 PDT 2016
Sun, Jul 24, 2016  2:29:11 PM
Mon, Jul 25, 2016  9:01:34 PM
