#ifndef _CRYPTO_CAST6_H
#define _CRYPTO_CAST6_H

#include <linux/types.h>
#include <linux/crypto.h>
#include <crypto/cast_common.h>

#define CAST6_BLOCK_SIZE 16
#define CAST6_MIN_KEY_SIZE 16
#define CAST6_MAX_KEY_SIZE 32

struct cast6_ctx {
	u32 Km[12][4];
	u8 Kr[12][4];
};

int __cast6_setkey(struct cast6_ctx *ctx, const u8 *key,
		   unsigned int keylen, u32 *flags);
int cast6_setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen);

void __cast6_encrypt(struct cast6_ctx *ctx, u8 *dst, const u8 *src);
void __cast6_decrypt(struct cast6_ctx *ctx, u8 *dst, const u8 *src);

#endif
Tue Jul 19 12:51:54 PDT 2016
Fri Jul 22 16:11:45 PDT 2016
Sun, Jul 24, 2016  5:28:51 PM
Tue, Jul 26, 2016 12:21:39 AM
