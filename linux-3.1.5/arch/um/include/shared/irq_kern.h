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

Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:23 PDT 2016
Sun, Jul 24, 2016  1:47:57 PM
Mon, Jul 25, 2016  8:14:16 PM
