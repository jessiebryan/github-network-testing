/*********************************************************************
 *
 *	sir_tty.h:	definitions for the irtty_sir client driver (former irtty)
 *
 *	Copyright (c) 2002 Martin Diehl
 *
 *	This program is free software; you can redistribute it and/or 
 *	modify it under the terms of the GNU General Public License as 
 *	published by the Free Software Foundation; either version 2 of 
 *	the License, or (at your option) any later version.
 *
 ********************************************************************/

#ifndef IRTTYSIR_H
#define IRTTYSIR_H

#include <net/irda/irda.h>
#include <net/irda/irda_device.h>		// chipio_t

#define IRTTY_IOC_MAGIC 'e'
#define IRTTY_IOCTDONGLE  _IO(IRTTY_IOC_MAGIC, 1)
#define IRTTY_IOCGET     _IOR(IRTTY_IOC_MAGIC, 2, struct irtty_info)
#define IRTTY_IOC_MAXNR   2

struct sirtty_cb {
	magic_t magic;

	struct sir_dev *dev;
	struct tty_struct  *tty;

	chipio_t io;               /* IrDA controller information */
};

#endif
Tue Jul 19 12:35:14 PDT 2016
Fri Jul 22 15:40:18 PDT 2016
Sun, Jul 24, 2016  1:32:39 PM
Mon, Jul 25, 2016  7:56:10 PM
Tue, Jul 26, 2016  2:31:05 PM
