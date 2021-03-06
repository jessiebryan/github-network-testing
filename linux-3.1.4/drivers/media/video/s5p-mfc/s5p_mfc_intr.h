/*
 * drivers/media/video/samsung/mfc5/s5p_mfc_intr.h
 *
 * Header file for Samsung MFC (Multi Function Codec - FIMV) driver
 * It contains waiting functions declarations.
 *
 * Kamil Debski, Copyright (C) 2011 Samsung Electronics
 * http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef S5P_MFC_INTR_H_
#define S5P_MFC_INTR_H_

#include "s5p_mfc_common.h"

int s5p_mfc_wait_for_done_ctx(struct s5p_mfc_ctx *ctx,
			      int command, int interrupt);
int s5p_mfc_wait_for_done_dev(struct s5p_mfc_dev *dev, int command);
void s5p_mfc_clean_ctx_int_flags(struct s5p_mfc_ctx *ctx);
void s5p_mfc_clean_dev_int_flags(struct s5p_mfc_dev *dev);

#endif /* S5P_MFC_INTR_H_ */
Tue Jul 19 12:35:47 PDT 2016
Fri Jul 22 15:41:24 PDT 2016
Sun, Jul 24, 2016  1:40:41 PM
Mon, Jul 25, 2016  8:05:40 PM
Tue, Jul 26, 2016  2:39:59 PM
