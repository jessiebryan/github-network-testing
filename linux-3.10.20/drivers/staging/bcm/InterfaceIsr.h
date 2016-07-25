#ifndef _INTERFACE_ISR_H
#define _INTERFACE_ISR_H

int CreateInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


INT StartInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


VOID InterfaceEnableInterrupt(struct bcm_mini_adapter *Adapter);

VOID InterfaceDisableInterrupt(struct bcm_mini_adapter *Adapter);

#endif

Tue Jul 19 12:47:56 PDT 2016
Fri Jul 22 16:04:13 PDT 2016
Sun, Jul 24, 2016  4:32:08 PM
