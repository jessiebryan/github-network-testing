/* 
 *
 * parport.h: ia32-compatible parport initialisation
 *
 * This file should only be included by drivers/parport/parport_pc.c.
 */
#ifndef _ASM_PARPORT_H
#define _ASM_PARPORT_H 1


static int __devinit parport_pc_find_nonpci_ports (int autoirq, int autodma)
{
	/* nothing ! */
	return 0;
}


#endif /* !(_ASM_PARPORT_H) */
Tue Jul 19 12:34:57 PDT 2016
Fri Jul 22 15:40:00 PDT 2016
Sun, Jul 24, 2016  1:30:33 PM
Mon, Jul 25, 2016  6:40:50 PM
Mon, Jul 25, 2016  7:53:40 PM
Tue, Jul 26, 2016  2:28:46 PM
