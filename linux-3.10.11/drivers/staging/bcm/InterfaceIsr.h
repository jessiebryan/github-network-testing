#ifndef _INTERFACE_ISR_H
#define _INTERFACE_ISR_H

int CreateInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


INT StartInterruptUrb(struct bcm_interface_adapter *psIntfAdapter);


VOID InterfaceEnableInterrupt(struct bcm_mini_adapter *Adapter);

VOID InterfaceDisableInterrupt(struct bcm_mini_adapter *Adapter);

#endif

Tue Jul 19 12:42:10 PDT 2016
Fri Jul 22 15:53:33 PDT 2016
Sun, Jul 24, 2016  3:09:08 PM
Mon, Jul 25, 2016  9:46:28 PM
