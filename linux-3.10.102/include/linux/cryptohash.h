#ifndef __CRYPTOHASH_H
#define __CRYPTOHASH_H

#define SHA_DIGEST_WORDS 5
#define SHA_MESSAGE_BYTES (512 /*bits*/ / 8)
#define SHA_WORKSPACE_WORDS 16

void sha_init(__u32 *buf);
void sha_transform(__u32 *digest, const char *data, __u32 *W);

#define MD5_DIGEST_WORDS 4
#define MD5_MESSAGE_BYTES 64

void md5_transform(__u32 *hash, __u32 const *in);

__u32 half_md4_transform(__u32 buf[4], __u32 const in[8]);

#endif
Tue Jul 19 12:41:28 PDT 2016
Fri Jul 22 15:52:30 PDT 2016
Sun, Jul 24, 2016  3:01:08 PM
Mon, Jul 25, 2016  9:37:26 PM
