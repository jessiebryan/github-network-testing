/*
 * Copyright (C) 2011 Samsung Electronics Co., Ltd.
 *
 * S5P series camera interface helper functions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef PLAT_S5P_CAMPORT_H_
#define PLAT_S5P_CAMPORT_H_ __FILE__

enum s5p_camport_id {
	S5P_CAMPORT_A,
	S5P_CAMPORT_B,
};

/*
 * The helper functions to configure GPIO for the camera parallel bus.
 * The camera port can be multiplexed with any FIMC entity, even multiple
 * FIMC entities are allowed to be attached to a single port simultaneously.
 * These functions are to be used in the board setup code.
 */
int s5pv210_fimc_setup_gpio(enum s5p_camport_id id);
int exynos4_fimc_setup_gpio(enum s5p_camport_id id);

#endif
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:56 PDT 2016
