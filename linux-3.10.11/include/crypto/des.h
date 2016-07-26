/* 
 * DES & Triple DES EDE Cipher Algorithms.
 */

#ifndef __CRYPTO_DES_H
#define __CRYPTO_DES_H

#define DES_KEY_SIZE		8
#define DES_EXPKEY_WORDS	32
#define DES_BLOCK_SIZE		8

#define DES3_EDE_KEY_SIZE	(3 * DES_KEY_SIZE)
#define DES3_EDE_EXPKEY_WORDS	(3 * DES_EXPKEY_WORDS)
#define DES3_EDE_BLOCK_SIZE	DES_BLOCK_SIZE


extern unsigned long des_ekey(u32 *pe, const u8 *k);

#endif /* __CRYPTO_DES_H */
Tue Jul 19 12:42:16 PDT 2016
Fri Jul 22 15:53:41 PDT 2016
Sun, Jul 24, 2016  3:10:11 PM
Mon, Jul 25, 2016  9:47:38 PM
