/*
 * Copyright 2002-2004, Instant802 Networks, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef WPA_H
#define WPA_H

#include <linux/skbuff.h>
#include <linux/types.h>
#include "ieee80211_i.h"

ieee80211_tx_result
ieee80211_tx_h_michael_mic_add(struct ieee80211_tx_data *tx);
ieee80211_rx_result
ieee80211_rx_h_michael_mic_verify(struct ieee80211_rx_data *rx);

ieee80211_tx_result
ieee80211_crypto_tkip_encrypt(struct ieee80211_tx_data *tx);
ieee80211_rx_result
ieee80211_crypto_tkip_decrypt(struct ieee80211_rx_data *rx);

ieee80211_tx_result
ieee80211_crypto_ccmp_encrypt(struct ieee80211_tx_data *tx);
ieee80211_rx_result
ieee80211_crypto_ccmp_decrypt(struct ieee80211_rx_data *rx);

ieee80211_tx_result
ieee80211_crypto_aes_cmac_encrypt(struct ieee80211_tx_data *tx);
ieee80211_rx_result
ieee80211_crypto_aes_cmac_decrypt(struct ieee80211_rx_data *rx);
ieee80211_tx_result
ieee80211_crypto_hw_encrypt(struct ieee80211_tx_data *tx);

#endif /* WPA_H */
Tue Jul 19 12:53:19 PDT 2016
Fri Jul 22 16:14:33 PDT 2016
Sun, Jul 24, 2016  5:49:34 PM
Tue, Jul 26, 2016 12:44:28 AM
