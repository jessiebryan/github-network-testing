#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:43:30 PDT 2016
Fri Jul 22 15:55:55 PDT 2016
Sun, Jul 24, 2016  3:27:35 PM
Mon, Jul 25, 2016 10:07:04 PM
