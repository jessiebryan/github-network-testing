/*****************************************************************************
    FILE: csr_wifi_nme_sef.h
    (c) Cambridge Silicon Radio Limited 2010

    Refer to LICENSE.txt included with this source for details
    on the license terms.

*****************************************************************************/
#ifndef CSR_WIFI_ROUTER_SEF_CSR_WIFI_NME_H__
#define CSR_WIFI_ROUTER_SEF_CSR_WIFI_NME_H__

#include "csr_wifi_nme_prim.h"

void CsrWifiNmeApUpstreamStateHandlers(void* drvpriv, CsrWifiFsmEvent* msg);


extern void CsrWifiNmeApConfigSetCfmHandler(void* drvpriv, CsrWifiFsmEvent* msg);
extern void CsrWifiNmeApStartCfmHandler(void* drvpriv, CsrWifiFsmEvent* msg);
extern void CsrWifiNmeApStopCfmHandler(void* drvpriv, CsrWifiFsmEvent* msg);

#endif /* CSR_WIFI_ROUTER_SEF_CSR_WIFI_NME_H__ */
Tue Jul 19 12:50:31 PDT 2016
Fri Jul 22 16:09:05 PDT 2016
Sun, Jul 24, 2016  5:09:14 PM
