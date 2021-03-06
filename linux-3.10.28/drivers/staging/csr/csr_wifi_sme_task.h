/*****************************************************************************

	(c) Cambridge Silicon Radio Limited 2011
	All rights reserved and confidential information of CSR

	Refer to LICENSE.txt included with this source for details
	on the license terms.

*****************************************************************************/

/* Note: this is an auto-generated file. */

#ifndef CSR_WIFI_SME_TASK_H__
#define CSR_WIFI_SME_TASK_H__

#include "csr_sched.h"

#define CSR_WIFI_SME_LOG_ID 0x1202FFFF
extern CsrSchedQid CSR_WIFI_SME_IFACEQUEUE;
void CsrWifiSmeInit(void **gash);
void CsrWifiSmeDeinit(void **gash);
void CsrWifiSmeHandler(void **gash);

#endif /* CSR_WIFI_SME_TASK_H__ */

Tue Jul 19 12:53:07 PDT 2016
Fri Jul 22 16:14:08 PDT 2016
Sun, Jul 24, 2016  5:46:31 PM
Tue, Jul 26, 2016 12:41:06 AM
