/*
 * Copyright (c) 1996, 2003 VIA Networking Technologies, Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *
 * File: usbpipe.h
 *
 * Purpose:
 *
 * Author: Warren Hsu
 *
 * Date: Mar. 30, 2005
 *
 */

#ifndef __USBPIPE_H__
#define __USBPIPE_H__

#include "ttype.h"
#include "device.h"

/*---------------------  Export Definitions -------------------------*/

/*---------------------  Export Classes  ----------------------------*/

/*---------------------  Export Variables  --------------------------*/

/*---------------------  Export Functions  --------------------------*/

int PIPEnsControlOut(
     PSDevice     pDevice,
     BYTE         byRequest,
     WORD         wValue,
     WORD         wIndex,
     WORD         wLength,
     PBYTE        pbyBuffer
    );

int PIPEnsControlOutAsyn(
     PSDevice     pDevice,
     BYTE         byRequest,
     WORD         wValue,
     WORD         wIndex,
     WORD         wLength,
     PBYTE        pbyBuffer
    );

int PIPEnsControlIn(
     PSDevice     pDevice,
     BYTE         byRequest,
     WORD         wValue,
     WORD         wIndex,
     WORD         wLength,
       PBYTE   pbyBuffer
    );

int PIPEnsInterruptRead(PSDevice pDevice);
int PIPEnsBulkInUsbRead(PSDevice pDevice, PRCB pRCB);
int PIPEnsSendBulkOut(PSDevice pDevice, PUSB_SEND_CONTEXT pContext);

#endif /* __USBPIPE_H__ */
Tue Jul 19 12:37:37 PDT 2016
Fri Jul 22 15:44:55 PDT 2016
Sun, Jul 24, 2016  2:06:40 PM
Mon, Jul 25, 2016  8:36:28 PM
