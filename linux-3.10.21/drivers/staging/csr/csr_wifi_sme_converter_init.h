/*****************************************************************************

            (c) Cambridge Silicon Radio Limited 2012
            All rights reserved and confidential information of CSR

            Refer to LICENSE.txt included with this source for details
            on the license terms.

*****************************************************************************/

/* Note: this is an auto-generated file. */

#ifndef CSR_WIFI_SME_CONVERTER_INIT_H__
#define CSR_WIFI_SME_CONVERTER_INIT_H__

#ifndef EXCLUDE_CSR_WIFI_SME_MODULE

#include "csr_msgconv.h"

#ifdef CSR_LOG_ENABLE
#include "csr_log.h"

extern const CsrLogPrimitiveInformation* CsrWifiSmeTechInfoGet(void);
#endif /* CSR_LOG_ENABLE */

extern void CsrWifiSmeConverterInit(void);

#else /* EXCLUDE_CSR_WIFI_SME_MODULE */

#define CsrWifiSmeConverterInit()

#endif /* EXCLUDE_CSR_WIFI_SME_MODULE */

#endif /* CSR_WIFI_SME_CONVERTER_INIT_H__ */
Tue Jul 19 12:48:35 PDT 2016
Fri Jul 22 16:05:25 PDT 2016
