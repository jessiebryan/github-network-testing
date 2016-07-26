/*
 * Synopsys DesignWare Multimedia Card Interface Platform driver
 *
 * Copyright (C) 2012, Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _DW_MMC_PLTFM_H_
#define _DW_MMC_PLTFM_H_

extern int dw_mci_pltfm_register(struct platform_device *pdev,
				const struct dw_mci_drv_data *drv_data);
extern int dw_mci_pltfm_remove(struct platform_device *pdev);
extern const struct dev_pm_ops dw_mci_pltfm_pmops;

#endif /* _DW_MMC_PLTFM_H_ */
Tue Jul 19 12:40:02 PDT 2016
Fri Jul 22 15:49:38 PDT 2016
Sun, Jul 24, 2016  2:40:39 PM
Mon, Jul 25, 2016  9:14:20 PM
