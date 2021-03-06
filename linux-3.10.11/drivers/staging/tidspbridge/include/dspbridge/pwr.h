/*
 * pwr.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Copyright (C) 2005-2006 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef PWR_
#define PWR_

#include <dspbridge/dbdefs.h>
#include <dspbridge/mbx_sh.h>

/* valid sleep command codes that can be sent by GPP via mailbox: */
#define PWR_DEEPSLEEP           MBX_PM_DSPIDLE
#define PWR_EMERGENCYDEEPSLEEP  MBX_PM_EMERGENCYSLEEP
#define PWR_WAKEUP              MBX_PM_DSPWAKEUP


/*
 *  ======== pwr_sleep_dsp ========
 *      Signal the DSP to go to sleep.
 *
 *  Parameters:
 *      sleep_code:          New sleep state for DSP.  (Initially, valid codes
 *                          are PWR_DEEPSLEEP or PWR_EMERGENCYDEEPSLEEP; both of
 *                          these codes will simply put the DSP in deep sleep.)
 *
 *	timeout:            Maximum time (msec) that PWR should wait for
 *                          confirmation that the DSP sleep state has been
 *                          reached.  If PWR should simply send the command to
 *                          the DSP to go to sleep and then return (i.e.,
 *                          asynchrounous sleep), the timeout should be
 *                          specified as zero.
 *
 *  Returns:
 *      0:            Success.
 *      0: Success, but the DSP was already asleep.
 *      -EINVAL:    The specified sleep_code is not supported.
 *      -ETIME:       A timeout occurred while waiting for DSP sleep
 *                          confirmation.
 *      -EPERM:          General failure, unable to send sleep command to
 *                          the DSP.
 */
extern int pwr_sleep_dsp(const u32 sleep_code, const u32 timeout);

/*
 *  ======== pwr_wake_dsp ========
 *    Signal the DSP to wake from sleep.
 *
 *  Parameters:
 *	timeout:            Maximum time (msec) that PWR should wait for
 *                          confirmation that the DSP is awake.  If PWR should
 *                          simply send a command to the DSP to wake and then
 *                          return (i.e., asynchrounous wake), timeout should
 *                          be specified as zero.
 *
 *  Returns:
 *      0:            Success.
 *      0:  Success, but the DSP was already awake.
 *      -ETIME:       A timeout occurred while waiting for wake
 *                          confirmation.
 *      -EPERM:          General failure, unable to send wake command to
 *                          the DSP.
 */
extern int pwr_wake_dsp(const u32 timeout);

/*
 *  ======== pwr_pm_pre_scale ========
 *    Prescale notification to DSP.
 *
 *  Parameters:
 *	voltage_domain:   The voltage domain for which notification is sent
 *    level:			The level of voltage domain
 *
 *  Returns:
 *      0:            Success.
 *      0:  Success, but the DSP was already awake.
 *      -ETIME:       A timeout occurred while waiting for wake
 *                          confirmation.
 *      -EPERM:          General failure, unable to send wake command to
 *                          the DSP.
 */
extern int pwr_pm_pre_scale(u16 voltage_domain, u32 level);

/*
 *  ======== pwr_pm_post_scale ========
 *    PostScale notification to DSP.
 *
 *  Parameters:
 *	voltage_domain:   The voltage domain for which notification is sent
 *    level:			The level of voltage domain
 *
 *  Returns:
 *      0:            Success.
 *      0:  Success, but the DSP was already awake.
 *      -ETIME:       A timeout occurred while waiting for wake
 *                          confirmation.
 *      -EPERM:          General failure, unable to send wake command to
 *                          the DSP.
 */
extern int pwr_pm_post_scale(u16 voltage_domain, u32 level);

#endif /* PWR_ */
Tue Jul 19 12:42:12 PDT 2016
Fri Jul 22 15:53:36 PDT 2016
Sun, Jul 24, 2016  3:09:27 PM
Mon, Jul 25, 2016  9:46:49 PM
