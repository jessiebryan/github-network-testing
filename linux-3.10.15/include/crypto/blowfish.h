/*
 * Common values for blowfish algorithms
 */

#ifndef _CRYPTO_BLOWFISH_H
#define _CRYPTO_BLOWFISH_H

#include <linux/types.h>
#include <linux/crypto.h>

#define BF_BLOCK_SIZE 8
#define BF_MIN_KEY_SIZE 4
#define BF_MAX_KEY_SIZE 56

struct bf_ctx {
	u32 p[18];
	u32 s[1024];
};

int blowfish_setkey(struct crypto_tfm *tfm, const u8 *key,
		    unsigned int key_len);

#endif
Tue Jul 19 12:44:53 PDT 2016
Fri Jul 22 15:58:25 PDT 2016
Sun, Jul 24, 2016  3:47:04 PM
Mon, Jul 25, 2016 10:28:44 PM
