/*****************************************************************************

            (c) Cambridge Silicon Radio Limited 2011
            All rights reserved and confidential information of CSR

            Refer to LICENSE.txt included with this source for details
            on the license terms.

*****************************************************************************/

/* Note: this is an auto-generated file. */

#ifndef CSR_WIFI_ROUTER_TASK_H__
#define CSR_WIFI_ROUTER_TASK_H__

#include "csr_sched.h"

#define CSR_WIFI_ROUTER_LOG_ID 0x1201FFFF
extern CsrSchedQid CSR_WIFI_ROUTER_IFACEQUEUE;
void CsrWifiRouterInit(void **gash);
void CsrWifiRouterDeinit(void **gash);
void CsrWifiRouterHandler(void **gash);

#endif /* CSR_WIFI_ROUTER_TASK_H__ */

Tue Jul 19 12:38:50 PDT 2016
Fri Jul 22 15:47:11 PDT 2016
Sun, Jul 24, 2016  2:23:09 PM
Mon, Jul 25, 2016  8:54:51 PM
