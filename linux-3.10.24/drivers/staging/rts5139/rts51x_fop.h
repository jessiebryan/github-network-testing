/* Driver for Realtek RTS51xx USB card reader
 *
 * Copyright(c) 2009 Realtek Semiconductor Corp. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author:
 *   wwang (wei_wang@realsil.com.cn)
 *   No. 450, Shenhu Road, Suzhou Industry Park, Suzhou, China
 * Maintainer:
 *   Edwin Rong (edwin_rong@realsil.com.cn)
 *   No. 450, Shenhu Road, Suzhou Industry Park, Suzhou, China
 */

#ifndef __RTS51X_FOP_H
#define __RTS51X_FOP_H

#include "rts51x.h"

#ifdef SUPPORT_FILE_OP

#include <linux/fs.h>
#include <linux/types.h>

struct sd_direct_cmnd {
	u8 cmnd[12];
	void *buf;
	int buf_len;
};

struct sd_rsp {
	void *rsp;
	int rsp_len;
};

int rts51x_open(struct inode *inode, struct file *filp);
int rts51x_release(struct inode *inode, struct file *filp);
ssize_t rts51x_read(struct file *filp, char __user *buf, size_t count,
		    loff_t *f_pos);
ssize_t rts51x_write(struct file *filp, const char __user *buf, size_t count,
		     loff_t *f_pos);
long rts51x_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);

#endif

#endif /* __RTS51X_FOP_H */
Tue Jul 19 12:50:32 PDT 2016
Fri Jul 22 16:09:06 PDT 2016
Sun, Jul 24, 2016  5:09:26 PM
Tue, Jul 26, 2016 12:00:14 AM
