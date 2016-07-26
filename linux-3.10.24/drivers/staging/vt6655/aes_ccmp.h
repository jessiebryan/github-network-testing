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
 * File: aes_ccmp.h
 *
 * Purpose: AES_CCMP Decryption
 *
 * Author: Warren Hsu
 *
 * Date: Feb 15, 2005
 *
 */

#ifndef __AES_H__
#define __AES_H__

#include "ttype.h"

/*---------------------  Export Definitions -------------------------*/

/*---------------------  Export Types  ------------------------------*/

/*---------------------  Export Classes  ----------------------------*/

/*---------------------  Export Variables  --------------------------*/

/*---------------------  Export Functions  --------------------------*/
bool AESbGenCCMP(unsigned char *pbyRxKey, unsigned char *pbyFrame, unsigned short wFrameSize);

#endif //__AES_H__
Tue Jul 19 12:50:32 PDT 2016
Fri Jul 22 16:09:07 PDT 2016
Sun, Jul 24, 2016  5:09:31 PM
Tue, Jul 26, 2016 12:00:19 AM
