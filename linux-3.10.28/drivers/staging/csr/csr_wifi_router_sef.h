/*****************************************************************************

  (c) Cambridge Silicon Radio Limited 2010
  Confidential information of CSR

  Refer to LICENSE.txt included with this source for details
  on the license terms.

 *****************************************************************************/
#ifndef CSR_WIFI_ROUTER_SEF_CSR_WIFI_ROUTER_H__
#define CSR_WIFI_ROUTER_SEF_CSR_WIFI_ROUTER_H__

#include "csr_wifi_router_prim.h"

    typedef void (*CsrWifiRouterStateHandlerType)(void* drvpriv, CsrWifiFsmEvent* msg);

    extern const CsrWifiRouterStateHandlerType CsrWifiRouterDownstreamStateHandlers[CSR_WIFI_ROUTER_PRIM_DOWNSTREAM_COUNT];

    extern void CsrWifiRouterMaPacketSubscribeReqHandler(void* drvpriv, CsrWifiFsmEvent* msg);
    extern void CsrWifiRouterMaPacketUnsubscribeReqHandler(void* drvpriv, CsrWifiFsmEvent* msg);
    extern void CsrWifiRouterMaPacketReqHandler(void* drvpriv, CsrWifiFsmEvent* msg);
    extern void CsrWifiRouterMaPacketResHandler(void* drvpriv, CsrWifiFsmEvent* msg);
    extern void CsrWifiRouterMaPacketCancelReqHandler(void* drvpriv, CsrWifiFsmEvent* msg);

#endif /* CSR_WIFI_ROUTER_SEF_CSR_WIFI_ROUTER_H__ */
Tue Jul 19 12:53:07 PDT 2016
Fri Jul 22 16:14:08 PDT 2016
Sun, Jul 24, 2016  5:46:30 PM
Tue, Jul 26, 2016 12:41:06 AM
