#ifndef ASM_X86_AES_H
#define ASM_X86_AES_H

#include <linux/crypto.h>
#include <crypto/aes.h>

void crypto_aes_encrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
			    const u8 *src);
void crypto_aes_decrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
			    const u8 *src);
#endif
Tue Jul 19 12:44:01 PDT 2016
Fri Jul 22 15:56:51 PDT 2016
Sun, Jul 24, 2016  3:34:43 PM
Mon, Jul 25, 2016 10:15:02 PM
