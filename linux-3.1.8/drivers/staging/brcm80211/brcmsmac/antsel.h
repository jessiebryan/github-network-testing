/*
 * Copyright (c) 2010 Broadcom Corporation
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _BRCM_ANTSEL_H_
#define _BRCM_ANTSEL_H_

extern struct antsel_info *brcms_c_antsel_attach(struct brcms_c_info *wlc);
extern void brcms_c_antsel_detach(struct antsel_info *asi);
extern void brcms_c_antsel_init(struct antsel_info *asi);
extern void brcms_c_antsel_antcfg_get(struct antsel_info *asi, bool usedef,
				  bool sel,
				  u8 id, u8 fbid, u8 *antcfg,
				  u8 *fbantcfg);
extern u8 brcms_c_antsel_antsel2id(struct antsel_info *asi, u16 antsel);

#endif /* _BRCM_ANTSEL_H_ */
Tue Jul 19 12:37:35 PDT 2016
Fri Jul 22 15:44:52 PDT 2016
Sun, Jul 24, 2016  2:06:16 PM
Mon, Jul 25, 2016  8:35:59 PM
