#ifndef _CRYPTO_MD5_H
#define _CRYPTO_MD5_H

#include <linux/types.h>

#define MD5_DIGEST_SIZE		16
#define MD5_HMAC_BLOCK_SIZE	64
#define MD5_BLOCK_WORDS		16
#define MD5_HASH_WORDS		4

struct md5_state {
	u32 hash[MD5_HASH_WORDS];
	u32 block[MD5_BLOCK_WORDS];
	u64 byte_count;
};

#endif
Tue Jul 19 12:43:34 PDT 2016
Fri Jul 22 15:56:03 PDT 2016
Sun, Jul 24, 2016  3:28:36 PM
Mon, Jul 25, 2016 10:08:13 PM
