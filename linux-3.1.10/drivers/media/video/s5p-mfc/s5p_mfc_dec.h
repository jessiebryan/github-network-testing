/*
 * linux/drivers/media/video/s5p-mfc/s5p_mfc_dec.h
 *
 * Copyright (C) 2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef S5P_MFC_DEC_H_
#define S5P_MFC_DEC_H_

struct s5p_mfc_codec_ops *get_dec_codec_ops(void);
struct vb2_ops *get_dec_queue_ops(void);
const struct v4l2_ioctl_ops *get_dec_v4l2_ioctl_ops(void);
struct s5p_mfc_fmt *get_dec_def_fmt(bool src);
int s5p_mfc_dec_ctrls_setup(struct s5p_mfc_ctx *ctx);
void s5p_mfc_dec_ctrls_delete(struct s5p_mfc_ctx *ctx);

#endif /* S5P_MFC_DEC_H_ */
Tue Jul 19 12:33:30 PDT 2016
Fri Jul 22 15:38:04 PDT 2016
Sun, Jul 24, 2016  1:15:56 PM
Mon, Jul 25, 2016  6:23:19 PM
Mon, Jul 25, 2016  7:36:32 PM
Tue, Jul 26, 2016  2:12:28 PM
