//------------------------------------------------------------------------------
// Copyright (c) 2004-2010 Atheros Corporation.  All rights reserved.
// 
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
// ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//
//
//------------------------------------------------------------------------------
//==============================================================================
// This file contains the tunable configuration items for the WLAN module
//
// Author(s): ="Atheros"
//==============================================================================
#ifndef _HOST_WLAN_CONFIG_H_
#define _HOST_WLAN_CONFIG_H_

/* Include definitions here that can be used to tune the WLAN module behavior.
 * Different customers can tune the behavior as per their needs, here. 
 */

/* This configuration item when defined will consider the barker preamble 
 * mentioned in the ERP IE of the beacons from the AP to determine the short 
 * preamble support sent in the (Re)Assoc request frames.
 */
#define WLAN_CONFIG_DONOT_IGNORE_BARKER_IN_ERP 0

/* This config item when defined will not send the power module state transition
 * failure events that happen during scan, to the host. 
 */
#define WLAN_CONFIG_IGNORE_POWER_SAVE_FAIL_EVENT_DURING_SCAN 0

/*
 * This configuration item enable/disable keepalive support.
 * Keepalive support: In the absence of any data traffic to AP, null 
 * frames will be sent to the AP at periodic interval, to keep the association
 * active. This configuration item defines the periodic interval.
 * Use value of zero to disable keepalive support
 * Default: 60 seconds
 */
#define WLAN_CONFIG_KEEP_ALIVE_INTERVAL 60 

/*
 * This configuration item sets the value of disconnect timeout
 * Firmware delays sending the disconnec event to the host for this
 * timeout after is gets disconnected from the current AP.
 * If the firmware successly roams within the disconnect timeout
 * it sends a new connect event
 */
#define WLAN_CONFIG_DISCONNECT_TIMEOUT 10

/*
 * This configuration item disables 11n support. 
 * 0 - Enable
 * 1 - Disable
 */
#define WLAN_CONFIG_DISABLE_11N         0

/*
 * This configuration item enable BT clock sharing support
 * 1 - Enable
 * 0 - Disable (Default)
 */
#define WLAN_CONFIG_BT_SHARING          0

/*
 * This configuration item sets WIFI OFF policy
 * 0 - CUT_POWER
 * 1 - DEEP_SLEEP (Default)
 */
#define WLAN_CONFIG_WLAN_OFF                1

/*
 * This configuration item sets suspend policy
 * 0 - CUT_POWER (Default)
 * 1 - DEEP_SLEEP
 * 2 - WoW
 * 3 - CUT_POWER if BT OFF (clock sharing designs only)
 */
#define WLAN_CONFIG_PM_SUSPEND              0

/*
 * This configuration item sets suspend policy to use if PM_SUSPEND is
 * set to WoW and device is not connected at the time of suspend
 * 0 - CUT_POWER (Default)
 * 1 - DEEP_SLEEP
 * 2 - WoW
 * 3 - CUT_POWER if BT OFF (clock sharing designs only)
 */
#define WLAN_CONFIG_PM_WOW2                 0

/*
 * This configuration item enables/disables transmit bursting 
 * 0 - Enable tx Bursting (default)
 * 1 - Disable tx bursting 
 */
#define WLAN_CONFIG_DISABLE_TX_BURSTING     0

#endif /* _HOST_WLAN_CONFIG_H_ */
Tue Jul 19 12:38:13 PDT 2016
Fri Jul 22 15:45:58 PDT 2016
Sun, Jul 24, 2016  2:14:28 PM
Mon, Jul 25, 2016  8:45:11 PM
