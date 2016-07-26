#ifndef _INTERFACE_IDLEMODE_H
#define _INTERFACE_IDLEMODE_H

INT InterfaceIdleModeWakeup(PMINI_ADAPTER Adapter);

INT InterfaceIdleModeRespond(PMINI_ADAPTER Adapter, unsigned int *puiBuffer);

VOID InterfaceWriteIdleModeWakePattern(PMINI_ADAPTER Adapter);

INT InterfaceWakeUp(PMINI_ADAPTER Adapter);

VOID InterfaceHandleShutdownModeWakeup(PMINI_ADAPTER Adapter);
#endif

Tue Jul 19 12:35:16 PDT 2016
Fri Jul 22 15:40:23 PDT 2016
Sun, Jul 24, 2016  1:33:16 PM
Mon, Jul 25, 2016  7:56:53 PM
Tue, Jul 26, 2016  2:31:45 PM
