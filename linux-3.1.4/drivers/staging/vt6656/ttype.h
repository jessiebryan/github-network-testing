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
 * File: ttype.h
 *
 * Purpose: define basic common types and macros
 *
 * Author: Tevin Chen
 *
 * Date: May 21, 1996
 *
 */

#ifndef __TTYPE_H__
#define __TTYPE_H__

/******* Common definitions and typedefs ***********************************/

typedef int             BOOL;

#if !defined(TRUE)
#define TRUE            1
#endif
#if !defined(FALSE)
#define FALSE           0
#endif

/****** Simple typedefs  ***************************************************/

typedef unsigned char   BYTE;           //  8-bit
typedef unsigned short  WORD;           // 16-bit
typedef unsigned long   DWORD;          // 32-bit

// QWORD is for those situation that we want
// an 8-byte-aligned 8 byte long structure
// which is NOT really a floating point number.
typedef union tagUQuadWord {
    struct {
        DWORD   dwLowDword;
        DWORD   dwHighDword;
    } u;
    double      DoNotUseThisField;
} UQuadWord;
typedef UQuadWord       QWORD;          // 64-bit

/****** Common pointer types ***********************************************/

typedef unsigned long   ULONG_PTR;      // 32-bit
typedef unsigned long   DWORD_PTR;      // 32-bit

// boolean pointer

typedef BYTE *           PBYTE;

typedef WORD *           PWORD;

typedef DWORD *          PDWORD;

typedef QWORD *          PQWORD;

#endif /* __TTYPE_H__ */
Tue Jul 19 12:35:52 PDT 2016
Fri Jul 22 15:41:34 PDT 2016
Sun, Jul 24, 2016  1:41:56 PM
Mon, Jul 25, 2016  8:07:07 PM
Tue, Jul 26, 2016  2:41:20 PM
