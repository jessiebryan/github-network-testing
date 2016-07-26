#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:44:49 PDT 2016
Fri Jul 22 15:58:18 PDT 2016
Sun, Jul 24, 2016  3:46:02 PM
Mon, Jul 25, 2016 10:27:36 PM
