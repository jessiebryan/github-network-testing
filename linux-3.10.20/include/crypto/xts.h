#ifndef _CRYPTO_XTS_H
#define _CRYPTO_XTS_H

#include <crypto/b128ops.h>

struct scatterlist;
struct blkcipher_desc;

#define XTS_BLOCK_SIZE 16

struct xts_crypt_req {
	be128 *tbuf;
	unsigned int tbuflen;

	void *tweak_ctx;
	void (*tweak_fn)(void *ctx, u8* dst, const u8* src);
	void *crypt_ctx;
	void (*crypt_fn)(void *ctx, u8 *blks, unsigned int nbytes);
};

#define XTS_TWEAK_CAST(x) ((void (*)(void *, u8*, const u8*))(x))

int xts_crypt(struct blkcipher_desc *desc, struct scatterlist *dst,
	      struct scatterlist *src, unsigned int nbytes,
	      struct xts_crypt_req *req);

#endif  /* _CRYPTO_XTS_H */
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:21 PDT 2016
Sun, Jul 24, 2016  4:33:12 PM
Mon, Jul 25, 2016 11:20:02 PM
