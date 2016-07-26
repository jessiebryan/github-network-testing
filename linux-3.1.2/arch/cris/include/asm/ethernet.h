/*  
 * ioctl defines for ethernet driver
 *
 * Copyright (c) 2001 Axis Communications AB
 * 
 * Author: Mikael Starvik 
 *
 */

#ifndef _CRIS_ETHERNET_H
#define _CRIS_ETHERNET_H
#define SET_ETH_SPEED_AUTO      SIOCDEVPRIVATE          /* Auto neg speed */
#define SET_ETH_SPEED_10        SIOCDEVPRIVATE+1        /* 10 Mbps */
#define SET_ETH_SPEED_100       SIOCDEVPRIVATE+2        /* 100 Mbps. */
#define SET_ETH_DUPLEX_AUTO     SIOCDEVPRIVATE+3        /* Auto neg duplex */
#define SET_ETH_DUPLEX_HALF     SIOCDEVPRIVATE+4        /* Full duplex */
#define SET_ETH_DUPLEX_FULL     SIOCDEVPRIVATE+5        /* Half duplex */
#define SET_ETH_ENABLE_LEDS     SIOCDEVPRIVATE+6        /* Enable net LEDs */
#define SET_ETH_DISABLE_LEDS    SIOCDEVPRIVATE+7        /* Disable net LEDs */
#define SET_ETH_AUTONEG         SIOCDEVPRIVATE+8
#endif /* _CRIS_ETHERNET_H */
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:45 PDT 2016
Sun, Jul 24, 2016  1:21:09 PM
Mon, Jul 25, 2016  6:29:34 PM
Mon, Jul 25, 2016  7:42:39 PM
