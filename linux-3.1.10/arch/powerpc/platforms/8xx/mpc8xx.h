/*
 * Prototypes, etc. for the Freescale MPC8xx embedded cpu chips
 * May need to be cleaned as the port goes on ...
 *
 * Copyright (C) 2008 Jochen Friedrich <jochen@scram.de>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef __MPC8xx_H
#define __MPC8xx_H

extern void mpc8xx_restart(char *cmd);
extern void mpc8xx_calibrate_decr(void);
extern int mpc8xx_set_rtc_time(struct rtc_time *tm);
extern void mpc8xx_get_rtc_time(struct rtc_time *tm);
extern void mpc8xx_pics_init(void);
extern unsigned int mpc8xx_get_irq(void);

#endif /* __MPC8xx_H */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:18 PM
Mon, Jul 25, 2016  6:21:22 PM
Mon, Jul 25, 2016  7:34:36 PM
Tue, Jul 26, 2016  2:10:40 PM
