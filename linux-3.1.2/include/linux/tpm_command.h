#ifndef __LINUX_TPM_COMMAND_H__
#define __LINUX_TPM_COMMAND_H__

/*
 * TPM Command constants from specifications at
 * http://www.trustedcomputinggroup.org
 */

/* Command TAGS */
#define TPM_TAG_RQU_COMMAND             193
#define TPM_TAG_RQU_AUTH1_COMMAND       194
#define TPM_TAG_RQU_AUTH2_COMMAND       195
#define TPM_TAG_RSP_COMMAND             196
#define TPM_TAG_RSP_AUTH1_COMMAND       197
#define TPM_TAG_RSP_AUTH2_COMMAND       198

/* Command Ordinals */
#define TPM_ORD_GETRANDOM               70
#define TPM_ORD_OSAP                    11
#define TPM_ORD_OIAP                    10
#define TPM_ORD_SEAL                    23
#define TPM_ORD_UNSEAL                  24

/* Other constants */
#define SRKHANDLE                       0x40000000
#define TPM_NONCE_SIZE                  20

#endif
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:30 PDT 2016
Sun, Jul 24, 2016  1:27:00 PM
Mon, Jul 25, 2016  6:36:35 PM
Mon, Jul 25, 2016  7:49:30 PM
Tue, Jul 26, 2016  2:24:49 PM
