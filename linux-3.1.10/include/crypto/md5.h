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
Tue Jul 19 12:33:38 PDT 2016
Fri Jul 22 15:38:19 PDT 2016
Sun, Jul 24, 2016  1:17:48 PM
Mon, Jul 25, 2016  6:25:33 PM
Mon, Jul 25, 2016  7:38:43 PM
Tue, Jul 26, 2016  2:14:36 PM
