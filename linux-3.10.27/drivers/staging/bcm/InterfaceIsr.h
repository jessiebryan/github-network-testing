#ifndef _INTERFACE_ISR_H
#define _INTERFACE_ISR_H

int CreateInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


INT StartInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


VOID InterfaceEnableInterrupt(struct bcm_mini_adapter *Adapter);

VOID InterfaceDisableInterrupt(struct bcm_mini_adapter *Adapter);

#endif

Tue Jul 19 12:52:28 PDT 2016
Fri Jul 22 16:12:52 PDT 2016
Sun, Jul 24, 2016  5:37:07 PM
Tue, Jul 26, 2016 12:30:46 AM
