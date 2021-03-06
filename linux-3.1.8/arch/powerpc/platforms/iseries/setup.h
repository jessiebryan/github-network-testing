/*
 *    Copyright (c) 2000 Mike Corrigan <mikejc@us.ibm.com>
 *    Copyright (c) 1999-2000 Grant Erickson <grant@lcse.umn.edu>
 *
 *    Description:
 *      Architecture- / platform-specific boot-time initialization code for
 *      the IBM AS/400 LPAR. Adapted from original code by Grant Erickson and
 *      code by Gary Thomas, Cort Dougan <cort@cs.nmt.edu>, and Dan Malek
 *      <dan@netx4.com>.
 *
 *      This program is free software; you can redistribute it and/or
 *      modify it under the terms of the GNU General Public License
 *      as published by the Free Software Foundation; either version
 *      2 of the License, or (at your option) any later version.
 */

#ifndef	__ISERIES_SETUP_H__
#define	__ISERIES_SETUP_H__

extern void *iSeries_early_setup(void);
extern unsigned long iSeries_get_boot_time(void);
extern int iSeries_set_rtc_time(struct rtc_time *tm);
extern void iSeries_get_rtc_time(struct rtc_time *tm);

extern void *build_flat_dt(unsigned long phys_mem_size);

#endif /* __ISERIES_SETUP_H__ */
Tue Jul 19 12:37:23 PDT 2016
Fri Jul 22 15:44:32 PDT 2016
Sun, Jul 24, 2016  2:03:49 PM
Mon, Jul 25, 2016  8:33:00 PM
