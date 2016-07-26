#ifndef __IOCTL_SET_H
#define __IOCTL_SET_H

#include "drv_types.h"

typedef u8 NDIS_802_11_PMKID_VALUE[16];

struct BSSIDInfo {
	unsigned char BSSID[6];
	NDIS_802_11_PMKID_VALUE PMKID;
};

u8 r8712_set_802_11_authentication_mode(struct _adapter *pdapter,
			enum NDIS_802_11_AUTHENTICATION_MODE authmode);

u8 r8712_set_802_11_bssid(struct _adapter *padapter, u8 *bssid);

u8 r8712_set_802_11_add_wep(struct _adapter *padapter,
			    struct NDIS_802_11_WEP *wep);

u8 r8712_set_802_11_disassociate(struct _adapter *padapter);

u8 r8712_set_802_11_bssid_list_scan(struct _adapter *padapter);

u8 r8712_set_802_11_infrastructure_mode(struct _adapter *padapter,
			enum NDIS_802_11_NETWORK_INFRASTRUCTURE networktype);

void r8712_set_802_11_ssid(struct _adapter *padapter,
			   struct ndis_802_11_ssid *ssid);

#endif

Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:17 PDT 2016
Sun, Jul 24, 2016  1:25:17 PM
Mon, Jul 25, 2016  6:34:32 PM
Mon, Jul 25, 2016  7:47:30 PM
Tue, Jul 26, 2016  2:22:56 PM
