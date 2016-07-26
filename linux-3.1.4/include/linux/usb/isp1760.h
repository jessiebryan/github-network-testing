/*
 * board initialization should put one of these into dev->platform_data
 * and place the isp1760 onto platform_bus named "isp1760-hcd".
 */

#ifndef __LINUX_USB_ISP1760_H
#define __LINUX_USB_ISP1760_H

struct isp1760_platform_data {
	unsigned is_isp1761:1;			/* Chip is ISP1761 */
	unsigned bus_width_16:1;		/* 16/32-bit data bus width */
	unsigned port1_otg:1;			/* Port 1 supports OTG */
	unsigned analog_oc:1;			/* Analog overcurrent */
	unsigned dack_polarity_high:1;		/* DACK active high */
	unsigned dreq_polarity_high:1;		/* DREQ active high */
};

#endif /* __LINUX_USB_ISP1760_H */
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:47 PDT 2016
Sun, Jul 24, 2016  1:43:32 PM
Mon, Jul 25, 2016  8:09:00 PM
