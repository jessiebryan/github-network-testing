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
Tue Jul 19 12:42:26 PDT 2016
Fri Jul 22 15:53:57 PDT 2016
Sun, Jul 24, 2016  3:12:12 PM
Mon, Jul 25, 2016  9:49:57 PM
