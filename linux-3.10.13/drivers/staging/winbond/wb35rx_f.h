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
Tue Jul 19 12:43:32 PDT 2016
Fri Jul 22 15:55:58 PDT 2016
Sun, Jul 24, 2016  3:27:57 PM
Mon, Jul 25, 2016 10:07:29 PM
