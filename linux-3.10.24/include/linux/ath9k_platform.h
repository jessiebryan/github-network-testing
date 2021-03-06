/*
 * Copyright (c) 2008 Atheros Communications Inc.
 * Copyright (c) 2009 Gabor Juhos <juhosg@openwrt.org>
 * Copyright (c) 2009 Imre Kaloz <kaloz@openwrt.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _LINUX_ATH9K_PLATFORM_H
#define _LINUX_ATH9K_PLATFORM_H

#define ATH9K_PLAT_EEP_MAX_WORDS	2048

struct ath9k_platform_data {
	const char *eeprom_name;

	u16 eeprom_data[ATH9K_PLAT_EEP_MAX_WORDS];
	u8 *macaddr;

	int led_pin;
	u32 gpio_mask;
	u32 gpio_val;

	bool is_clk_25mhz;
	int (*get_mac_revision)(void);
	int (*external_reset)(void);
};

#endif /* _LINUX_ATH9K_PLATFORM_H */
Tue Jul 19 12:50:35 PDT 2016
Fri Jul 22 16:09:13 PDT 2016
Sun, Jul 24, 2016  5:10:18 PM
Tue, Jul 26, 2016 12:01:11 AM
