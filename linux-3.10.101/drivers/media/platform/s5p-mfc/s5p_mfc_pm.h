/*
 * linux/drivers/media/platform/s5p-mfc/s5p_mfc_pm.h
 *
 * Copyright (C) 2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef S5P_MFC_PM_H_
#define S5P_MFC_PM_H_

int s5p_mfc_init_pm(struct s5p_mfc_dev *dev);
void s5p_mfc_final_pm(struct s5p_mfc_dev *dev);

int s5p_mfc_clock_on(void);
void s5p_mfc_clock_off(void);
int s5p_mfc_power_on(void);
int s5p_mfc_power_off(void);

#endif /* S5P_MFC_PM_H_ */
Tue Jul 19 12:40:41 PDT 2016
Fri Jul 22 15:50:52 PDT 2016
Sun, Jul 24, 2016  2:49:42 PM
Mon, Jul 25, 2016  9:24:33 PM
