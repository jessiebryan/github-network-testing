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

Tue Jul 19 12:51:01 PDT 2016
Fri Jul 22 16:10:01 PDT 2016
Sun, Jul 24, 2016  5:16:19 PM
Tue, Jul 26, 2016 12:07:51 AM
