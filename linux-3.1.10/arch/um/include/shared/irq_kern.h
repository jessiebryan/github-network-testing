/*
 * Copyright (C) 2001, 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __IRQ_KERN_H__
#define __IRQ_KERN_H__

#include "linux/interrupt.h"
#include "asm/ptrace.h"

extern int um_request_irq(unsigned int irq, int fd, int type,
			  irq_handler_t handler,
			  unsigned long irqflags,  const char * devname,
			  void *dev_id);

#endif

Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:57 PM
Mon, Jul 25, 2016  6:22:09 PM
Mon, Jul 25, 2016  7:35:23 PM
Tue, Jul 26, 2016  2:11:23 PM
