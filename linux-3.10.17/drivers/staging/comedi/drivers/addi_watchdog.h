#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:46:01 PDT 2016
Fri Jul 22 16:00:38 PDT 2016
Sun, Jul 24, 2016  4:04:29 PM
Mon, Jul 25, 2016 10:48:07 PM
