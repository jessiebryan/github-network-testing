#ifndef _INTERFACE_ISR_H
#define _INTERFACE_ISR_H

int CreateInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


INT StartInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


VOID InterfaceEnableInterrupt(struct bcm_mini_adapter *Adapter);

VOID InterfaceDisableInterrupt(struct bcm_mini_adapter *Adapter);

#endif

Tue Jul 19 12:42:52 PDT 2016
Fri Jul 22 15:54:44 PDT 2016
Sun, Jul 24, 2016  3:18:20 PM
Mon, Jul 25, 2016  9:56:49 PM
