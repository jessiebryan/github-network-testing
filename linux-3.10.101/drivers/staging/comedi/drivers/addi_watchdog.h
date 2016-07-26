#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:40:45 PDT 2016
Fri Jul 22 15:51:00 PDT 2016
Sun, Jul 24, 2016  2:50:43 PM
Mon, Jul 25, 2016  9:25:41 PM
