#ifndef _INTERFACE_IDLEMODE_H
#define _INTERFACE_IDLEMODE_H

INT InterfaceIdleModeWakeup(struct bcm_mini_adapter *Adapter);

INT InterfaceIdleModeRespond(struct bcm_mini_adapter *Adapter,
				unsigned int *puiBuffer);

VOID InterfaceWriteIdleModeWakePattern(struct bcm_mini_adapter *Adapter);

INT InterfaceWakeUp(struct bcm_mini_adapter *Adapter);

VOID InterfaceHandleShutdownModeWakeup(struct bcm_mini_adapter *Adapter);
#endif

Tue Jul 19 12:50:30 PDT 2016
Fri Jul 22 16:09:04 PDT 2016
Sun, Jul 24, 2016  5:09:11 PM
Mon, Jul 25, 2016 11:59:57 PM
