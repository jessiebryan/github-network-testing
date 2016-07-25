#ifndef _INTERFACE_IDLEMODE_H
#define _INTERFACE_IDLEMODE_H

INT InterfaceIdleModeWakeup(struct bcm_mini_adapter *Adapter);

INT InterfaceIdleModeRespond(struct bcm_mini_adapter *Adapter,
				unsigned int *puiBuffer);

VOID InterfaceWriteIdleModeWakePattern(struct bcm_mini_adapter *Adapter);

INT InterfaceWakeUp(struct bcm_mini_adapter *Adapter);

VOID InterfaceHandleShutdownModeWakeup(struct bcm_mini_adapter *Adapter);
#endif

Tue Jul 19 12:42:10 PDT 2016
Fri Jul 22 15:53:33 PDT 2016
Sun, Jul 24, 2016  3:09:08 PM
