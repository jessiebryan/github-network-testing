/*****************************************************************************

            (c) Cambridge Silicon Radio Limited 2011
            All rights reserved and confidential information of CSR

            Refer to LICENSE.txt included with this source for details
            on the license terms.

*****************************************************************************/

#ifndef CSR_WIFI_FSM_EVENT_H
#define CSR_WIFI_FSM_EVENT_H

#include "csr_prim_defs.h"
#include "csr_sched.h"

/**
 * @brief
 *   FSM event header.
 *
 * @par Description
 *   All events MUST have this struct as the FIRST member.
 *   The next member is used internally for linked lists
 */
typedef struct CsrWifiFsmEvent
{
    CsrPrim     type;
    u16   primtype;
    CsrSchedQid destination;
    CsrSchedQid source;

    /* Private pointer to allow an optimal Event list */
    /* NOTE: Ignore this pointer.
     *       Do not waste code initializing OR freeing it.
     *       The pointer is used internally in the CsrWifiFsm code
     *       to avoid a second malloc when queuing events.
     */
    struct CsrWifiFsmEvent *next;
} CsrWifiFsmEvent;

#endif /* CSR_WIFI_FSM_EVENT_H */

Tue Jul 19 12:40:06 PDT 2016
Fri Jul 22 15:49:45 PDT 2016
Sun, Jul 24, 2016  2:41:32 PM
Mon, Jul 25, 2016  9:15:18 PM
