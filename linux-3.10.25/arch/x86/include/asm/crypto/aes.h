#ifndef ASM_X86_AES_H
#define ASM_X86_AES_H

#include <linux/crypto.h>
#include <crypto/aes.h>

void crypto_aes_encrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
			    const u8 *src);
void crypto_aes_decrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
			    const u8 *src);
#endif
Tue Jul 19 12:51:01 PDT 2016
Fri Jul 22 16:10:02 PDT 2016
Sun, Jul 24, 2016  5:16:25 PM
Tue, Jul 26, 2016 12:07:58 AM
