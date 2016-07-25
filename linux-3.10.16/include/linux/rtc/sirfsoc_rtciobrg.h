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
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:43 PDT 2016
Sun, Jul 24, 2016  3:57:11 PM
