/* Orinoco MIC helpers
 *
 * See copyright notice in main.c
 */
#ifndef _ORINOCO_MIC_H_
#define _ORINOCO_MIC_H_

#include <linux/types.h>

#define MICHAEL_MIC_LEN 8

/* Forward declarations */
struct orinoco_private;
struct crypto_hash;

int orinoco_mic_init(struct orinoco_private *priv);
void orinoco_mic_free(struct orinoco_private *priv);
int orinoco_mic(struct crypto_hash *tfm_michael, u8 *key,
		u8 *da, u8 *sa, u8 priority,
		u8 *data, size_t data_len, u8 *mic);

#endif /* ORINOCO_MIC_H */
Tue Jul 19 12:40:04 PDT 2016
Fri Jul 22 15:49:41 PDT 2016
Sun, Jul 24, 2016  2:41:04 PM
Mon, Jul 25, 2016  9:14:47 PM
