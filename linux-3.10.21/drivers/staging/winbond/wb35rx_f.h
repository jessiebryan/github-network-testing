#ifndef __WINBOND_WB35RX_F_H
#define __WINBOND_WB35RX_F_H

#include <net/mac80211.h>
#include "wbhal.h"

/*
 * Interface function declaration
 */
unsigned char	Wb35Rx_initial(struct hw_data *pHwData);
void		Wb35Rx_destroy(struct hw_data *pHwData);
void		Wb35Rx_stop(struct hw_data *pHwData);
void		Wb35Rx_start(struct ieee80211_hw *hw);

#endif
Tue Jul 19 12:48:36 PDT 2016
Fri Jul 22 16:05:28 PDT 2016
Sun, Jul 24, 2016  4:41:46 PM
Mon, Jul 25, 2016 11:29:32 PM
