/* $Id: adapter.h,v 1.4 2004/03/21 17:26:01 armin Exp $ */

#ifndef __DIVA_USER_MODE_IDI_ADAPTER_H__
#define __DIVA_USER_MODE_IDI_ADAPTER_H__

#define DIVA_UM_IDI_ADAPTER_REMOVED 0x00000001

typedef struct _diva_um_idi_adapter {
	struct list_head link;
	DESCRIPTOR d;
	int adapter_nr;
	struct list_head entity_q;	/* entities linked to this adapter */
	dword status;
} diva_um_idi_adapter_t;


#endif
Tue Jul 19 12:39:22 PDT 2016
Fri Jul 22 15:48:17 PDT 2016
Sun, Jul 24, 2016  2:30:57 PM
Mon, Jul 25, 2016  9:03:33 PM
