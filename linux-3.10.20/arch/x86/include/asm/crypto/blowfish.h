#ifndef ASM_X86_BLOWFISH_H
#define ASM_X86_BLOWFISH_H

#include <linux/crypto.h>
#include <crypto/blowfish.h>

#define BF_PARALLEL_BLOCKS 4

/* regular block cipher functions */
asmlinkage void __blowfish_enc_blk(struct bf_ctx *ctx, u8 *dst, const u8 *src,
				   bool xor);
asmlinkage void blowfish_dec_blk(struct bf_ctx *ctx, u8 *dst, const u8 *src);

/* 4-way parallel cipher functions */
asmlinkage void __blowfish_enc_blk_4way(struct bf_ctx *ctx, u8 *dst,
					const u8 *src, bool xor);
asmlinkage void blowfish_dec_blk_4way(struct bf_ctx *ctx, u8 *dst,
				      const u8 *src);

static inline void blowfish_enc_blk(struct bf_ctx *ctx, u8 *dst, const u8 *src)
{
	__blowfish_enc_blk(ctx, dst, src, false);
}

static inline void blowfish_enc_blk_xor(struct bf_ctx *ctx, u8 *dst,
					const u8 *src)
{
	__blowfish_enc_blk(ctx, dst, src, true);
}

static inline void blowfish_enc_blk_4way(struct bf_ctx *ctx, u8 *dst,
					 const u8 *src)
{
	__blowfish_enc_blk_4way(ctx, dst, src, false);
}

static inline void blowfish_enc_blk_xor_4way(struct bf_ctx *ctx, u8 *dst,
				      const u8 *src)
{
	__blowfish_enc_blk_4way(ctx, dst, src, true);
}

#endif
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:57 PDT 2016
Sun, Jul 24, 2016  4:30:05 PM
Mon, Jul 25, 2016 11:16:34 PM
