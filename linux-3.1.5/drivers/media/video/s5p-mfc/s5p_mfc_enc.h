/*
 * linux/drivers/media/video/s5p-mfc/s5p_mfc_enc.h
 *
 * Copyright (C) 2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef S5P_MFC_ENC_H_
#define S5P_MFC_ENC_H_

struct s5p_mfc_codec_ops *get_enc_codec_ops(void);
struct vb2_ops *get_enc_queue_ops(void);
const struct v4l2_ioctl_ops *get_enc_v4l2_ioctl_ops(void);
struct s5p_mfc_fmt *get_enc_def_fmt(bool src);
int s5p_mfc_enc_ctrls_setup(struct s5p_mfc_ctx *ctx);
void s5p_mfc_enc_ctrls_delete(struct s5p_mfc_ctx *ctx);

#endif /* S5P_MFC_ENC_H_  */
Tue Jul 19 12:36:22 PDT 2016
Fri Jul 22 15:42:30 PDT 2016
Sun, Jul 24, 2016  1:48:56 PM
Mon, Jul 25, 2016  8:15:25 PM
