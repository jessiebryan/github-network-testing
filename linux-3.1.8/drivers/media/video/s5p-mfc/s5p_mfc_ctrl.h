/*
 * linux/drivers/media/video/s5p-mfc/s5p_mfc_ctrl.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef S5P_MFC_CTRL_H
#define S5P_MFC_CTRL_H

#include "s5p_mfc_common.h"

int s5p_mfc_release_firmware(struct s5p_mfc_dev *dev);
int s5p_mfc_alloc_and_load_firmware(struct s5p_mfc_dev *dev);
int s5p_mfc_reload_firmware(struct s5p_mfc_dev *dev);

int s5p_mfc_init_hw(struct s5p_mfc_dev *dev);

int s5p_mfc_sleep(struct s5p_mfc_dev *dev);
int s5p_mfc_wakeup(struct s5p_mfc_dev *dev);

int s5p_mfc_reset(struct s5p_mfc_dev *dev);

#endif /* S5P_MFC_CTRL_H */
Tue Jul 19 12:37:31 PDT 2016
Fri Jul 22 15:44:45 PDT 2016
Sun, Jul 24, 2016  2:05:26 PM
Mon, Jul 25, 2016  8:34:57 PM
