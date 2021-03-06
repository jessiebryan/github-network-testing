/*
 * Copyright 2008-2010 Cisco Systems, Inc.  All rights reserved.
 * Copyright 2007 Nuova Systems, Inc.  All rights reserved.
 *
 * This program is free software; you may redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _VNIC_RSS_H_
#define _VNIC_RSS_H_

/* RSS key array */
union vnic_rss_key {
	struct {
		u8 b[10];
		u8 b_pad[6];
	} key[4];
	u64 raw[8];
};

/* RSS cpu array */
union vnic_rss_cpu {
	struct {
		u8 b[4] ;
		u8 b_pad[4];
	} cpu[32];
	u64 raw[32];
};

#endif /* _VNIC_RSS_H_ */
Tue Jul 19 12:52:24 PDT 2016
Fri Jul 22 16:12:46 PDT 2016
Sun, Jul 24, 2016  5:36:23 PM
Tue, Jul 26, 2016 12:29:57 AM
