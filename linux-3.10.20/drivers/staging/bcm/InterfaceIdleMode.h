#ifndef _INTERFACE_IDLEMODE_H
#define _INTERFACE_IDLEMODE_H

INT InterfaceIdleModeWakeup(struct bcm_mini_adapter *Adapter);

INT InterfaceIdleModeRespond(struct bcm_mini_adapter *Adapter,
				unsigned int *puiBuffer);

VOID InterfaceWriteIdleModeWakePattern(struct bcm_mini_adapter *Adapter);

INT InterfaceWakeUp(struct bcm_mini_adapter *Adapter);

VOID InterfaceHandleShutdownModeWakeup(struct bcm_mini_adapter *Adapter);
#endif

Tue Jul 19 12:47:56 PDT 2016
Fri Jul 22 16:04:13 PDT 2016
Sun, Jul 24, 2016  4:32:08 PM
Mon, Jul 25, 2016 11:18:51 PM
