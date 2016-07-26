#ifndef _INTERFACE_IDLEMODE_H
#define _INTERFACE_IDLEMODE_H

INT InterfaceIdleModeWakeup(PMINI_ADAPTER Adapter);

INT InterfaceIdleModeRespond(PMINI_ADAPTER Adapter, unsigned int *puiBuffer);

VOID InterfaceWriteIdleModeWakePattern(PMINI_ADAPTER Adapter);

INT InterfaceWakeUp(PMINI_ADAPTER Adapter);

VOID InterfaceHandleShutdownModeWakeup(PMINI_ADAPTER Adapter);
#endif

Tue Jul 19 12:33:33 PDT 2016
Fri Jul 22 15:38:10 PDT 2016
Sun, Jul 24, 2016  1:16:45 PM
Mon, Jul 25, 2016  6:24:17 PM
Mon, Jul 25, 2016  7:37:29 PM
Tue, Jul 26, 2016  2:13:23 PM
