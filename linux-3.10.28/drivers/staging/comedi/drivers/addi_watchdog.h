#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:53:07 PDT 2016
Fri Jul 22 16:14:08 PDT 2016
Sun, Jul 24, 2016  5:46:27 PM
Tue, Jul 26, 2016 12:41:03 AM
