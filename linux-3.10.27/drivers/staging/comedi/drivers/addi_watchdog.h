#ifndef _ADDI_WATCHDOG_H
#define _ADDI_WATCHDOG_H

#include "../comedidev.h"

void addi_watchdog_reset(unsigned long iobase);
int addi_watchdog_init(struct comedi_subdevice *, unsigned long iobase);

#endif
Tue Jul 19 12:52:28 PDT 2016
