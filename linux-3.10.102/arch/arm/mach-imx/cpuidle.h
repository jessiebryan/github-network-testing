/*
 * Copyright 2012 Freescale Semiconductor, Inc.
 * Copyright 2012 Linaro Ltd.
 *
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

#ifdef CONFIG_CPU_IDLE
extern int imx5_cpuidle_init(void);
extern int imx6q_cpuidle_init(void);
#else
static inline int imx5_cpuidle_init(void)
{
	return 0;
}
static inline int imx6q_cpuidle_init(void)
{
	return 0;
}
#endif
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:32 PDT 2016
Sun, Jul 24, 2016  2:54:35 PM
Mon, Jul 25, 2016  9:30:02 PM
