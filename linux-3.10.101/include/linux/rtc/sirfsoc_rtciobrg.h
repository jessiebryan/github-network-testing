/*
 * RTC I/O Bridge interfaces for CSR SiRFprimaII
 * ARM access the registers of SYSRTC, GPSRTC and PWRC through this module
 *
 * Copyright (c) 2011 Cambridge Silicon Radio Limited, a CSR plc group company.
 *
 * Licensed under GPLv2 or later.
 */
#ifndef _SIRFSOC_RTC_IOBRG_H_
#define _SIRFSOC_RTC_IOBRG_H_

extern void sirfsoc_rtc_iobrg_besyncing(void);

extern u32 sirfsoc_rtc_iobrg_readl(u32 addr);

extern void sirfsoc_rtc_iobrg_writel(u32 val, u32 addr);

#endif
Tue Jul 19 12:40:53 PDT 2016
Fri Jul 22 15:51:16 PDT 2016
Sun, Jul 24, 2016  2:52:38 PM
Mon, Jul 25, 2016  9:27:51 PM
