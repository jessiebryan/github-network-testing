/*
 * Shared async block cipher helpers
 */

#ifndef _CRYPTO_ABLK_HELPER_H
#define _CRYPTO_ABLK_HELPER_H

#include <linux/crypto.h>
#include <linux/kernel.h>
#include <crypto/cryptd.h>

struct async_helper_ctx {
	struct cryptd_ablkcipher *cryptd_tfm;
};

extern int ablk_set_key(struct crypto_ablkcipher *tfm, const u8 *key,
			unsigned int key_len);

extern int __ablk_encrypt(struct ablkcipher_request *req);

extern int ablk_encrypt(struct ablkcipher_request *req);

extern int ablk_decrypt(struct ablkcipher_request *req);

extern void ablk_exit(struct crypto_tfm *tfm);

extern int ablk_init_common(struct crypto_tfm *tfm, const char *drv_name);

extern int ablk_init(struct crypto_tfm *tfm);

#endif /* _CRYPTO_ABLK_HELPER_H */
Tue Jul 19 12:42:43 PDT 2016
Fri Jul 22 15:54:28 PDT 2016
Sun, Jul 24, 2016  3:16:17 PM
Mon, Jul 25, 2016  9:54:34 PM
