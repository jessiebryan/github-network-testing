#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:49:52 PDT 2016
Fri Jul 22 16:07:50 PDT 2016
Sun, Jul 24, 2016  4:59:52 PM
Mon, Jul 25, 2016 11:49:43 PM
