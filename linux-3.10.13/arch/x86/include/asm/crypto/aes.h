#ifndef ASM_X86_AES_H
#define ASM_X86_AES_H

#include <linux/crypto.h>
#include <crypto/aes.h>

void crypto_aes_encrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
			    const u8 *src);
void crypto_aes_decrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
			    const u8 *src);
#endif
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:38 PDT 2016
Sun, Jul 24, 2016  3:25:30 PM
Mon, Jul 25, 2016 10:04:46 PM
