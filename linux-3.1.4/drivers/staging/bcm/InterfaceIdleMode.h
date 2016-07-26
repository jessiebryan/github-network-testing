#ifndef _INTERFACE_IDLEMODE_H
#define _INTERFACE_IDLEMODE_H

INT InterfaceIdleModeWakeup(PMINI_ADAPTER Adapter);

INT InterfaceIdleModeRespond(PMINI_ADAPTER Adapter, unsigned int *puiBuffer);

VOID InterfaceWriteIdleModeWakePattern(PMINI_ADAPTER Adapter);

INT InterfaceWakeUp(PMINI_ADAPTER Adapter);

VOID InterfaceHandleShutdownModeWakeup(PMINI_ADAPTER Adapter);
#endif

Tue Jul 19 12:35:51 PDT 2016
Fri Jul 22 15:41:31 PDT 2016
Sun, Jul 24, 2016  1:41:30 PM
Mon, Jul 25, 2016  8:06:36 PM
