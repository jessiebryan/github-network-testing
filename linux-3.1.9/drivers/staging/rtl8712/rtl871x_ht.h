#ifndef _RTL871X_HT_H_
#define _RTL871X_HT_H_

#include "osdep_service.h"
#include "wifi.h"

struct ht_priv {
	unsigned int	ht_option;
	unsigned int	ampdu_enable;/*for enable Tx A-MPDU*/
	unsigned char	baddbareq_issued[16];
	unsigned int	tx_amsdu_enable;/*for enable Tx A-MSDU */
	unsigned int	tx_amdsu_maxlen; /* 1: 8k, 0:4k ; default:8k, for tx */
	unsigned int	rx_ampdu_maxlen; /* for rx reordering ctrl win_sz,
					  *  updated when join_callback. */
	struct ieee80211_ht_cap ht_cap;
};

#endif	/*_RTL871X_HT_H_ */

Tue Jul 19 12:38:14 PDT 2016
Fri Jul 22 15:46:00 PDT 2016
Sun, Jul 24, 2016  2:14:45 PM
Mon, Jul 25, 2016  8:45:30 PM
