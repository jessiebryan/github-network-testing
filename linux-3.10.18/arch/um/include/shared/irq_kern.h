/*
 * Copyright (C) 2001, 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __IRQ_KERN_H__
#define __IRQ_KERN_H__

#include <linux/interrupt.h>
#include <asm/ptrace.h>

extern int um_request_irq(unsigned int irq, int fd, int type,
			  irq_handler_t handler,
			  unsigned long irqflags,  const char * devname,
			  void *dev_id);
void um_free_irq(unsigned int irq, void *dev);
#endif

Tue Jul 19 12:46:30 PDT 2016
Fri Jul 22 16:01:34 PDT 2016
Sun, Jul 24, 2016  4:11:31 PM
Mon, Jul 25, 2016 10:55:58 PM
