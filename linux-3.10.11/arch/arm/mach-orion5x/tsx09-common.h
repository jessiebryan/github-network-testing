#ifndef __ARCH_ORION5X_TSX09_COMMON_H
#define __ARCH_ORION5X_TSX09_COMMON_H

/*
 * QNAP TS-x09 Boards power-off function
 */
extern void qnap_tsx09_power_off(void);

/*
 * QNAP TS-x09 Boards function to find Ethernet MAC address in flash memory
 */
extern void __init qnap_tsx09_find_mac_addr(u32 mem_base, u32 size);

/*
 * QNAP TS-x09 Boards ethernet declaration
 */
extern struct mv643xx_eth_platform_data qnap_tsx09_eth_data;


#endif
Tue Jul 19 12:41:43 PDT 2016
Fri Jul 22 15:52:53 PDT 2016
Sun, Jul 24, 2016  3:04:02 PM
Mon, Jul 25, 2016  9:40:42 PM
