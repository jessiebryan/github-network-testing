/*
 * Copyright 2008, Jouni Malinen <j@w1.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef AES_CMAC_H
#define AES_CMAC_H

#include <linux/crypto.h>

struct crypto_cipher * ieee80211_aes_cmac_key_setup(const u8 key[]);
void ieee80211_aes_cmac(struct crypto_cipher *tfm, const u8 *aad,
			const u8 *data, size_t data_len, u8 *mic);
void ieee80211_aes_cmac_key_free(struct crypto_cipher *tfm);

#endif /* AES_CMAC_H */
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:30 PDT 2016
Sun, Jul 24, 2016  1:19:18 PM
Mon, Jul 25, 2016  6:27:22 PM
Mon, Jul 25, 2016  7:40:29 PM
Tue, Jul 26, 2016  2:16:16 PM
