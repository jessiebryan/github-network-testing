/*****************************************************************************

            (c) Cambridge Silicon Radio Limited 2011
            All rights reserved and confidential information of CSR

            Refer to LICENSE.txt included with this source for details
            on the license terms.

*****************************************************************************/

/* Note: this is an auto-generated file. */

#ifndef CSR_WIFI_NME_CONVERTER_INIT_H__
#define CSR_WIFI_NME_CONVERTER_INIT_H__

#ifndef CSR_WIFI_NME_ENABLE
#error CSR_WIFI_NME_ENABLE MUST be defined inorder to use csr_wifi_nme_converter_init.h
#endif

#ifndef EXCLUDE_CSR_WIFI_NME_MODULE

#include "csr_msgconv.h"

#ifdef CSR_LOG_ENABLE
#include "csr_log.h"

extern const CsrLogPrimitiveInformation* CsrWifiNmeTechInfoGet(void);
#endif /* CSR_LOG_ENABLE */

extern void CsrWifiNmeConverterInit(void);

#else /* EXCLUDE_CSR_WIFI_NME_MODULE */

#define CsrWifiNmeConverterInit()

#endif /* EXCLUDE_CSR_WIFI_NME_MODULE */

#endif /* CSR_WIFI_NME_CONVERTER_INIT_H__ */
Tue Jul 19 12:52:28 PDT 2016
Fri Jul 22 16:12:52 PDT 2016
Sun, Jul 24, 2016  5:37:10 PM
Tue, Jul 26, 2016 12:30:50 AM
