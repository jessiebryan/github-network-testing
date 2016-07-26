#ifndef _NET_ESP_H
#define _NET_ESP_H

#include <linux/skbuff.h>

struct crypto_aead;

struct esp_data {
	/* 0..255 */
	int padlen;

	/* Confidentiality & Integrity */
	struct crypto_aead *aead;
};

extern void *pskb_put(struct sk_buff *skb, struct sk_buff *tail, int len);

struct ip_esp_hdr;

static inline struct ip_esp_hdr *ip_esp_hdr(const struct sk_buff *skb)
{
	return (struct ip_esp_hdr *)skb_transport_header(skb);
}

#endif
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:48 PDT 2016
Sun, Jul 24, 2016  1:43:41 PM
Mon, Jul 25, 2016  8:09:11 PM
Tue, Jul 26, 2016  2:43:16 PM
