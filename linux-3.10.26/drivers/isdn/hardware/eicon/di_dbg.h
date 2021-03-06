
/*
 *
 Copyright (c) Eicon Networks, 2002.
 *
 This source file is supplied for the use with
 Eicon Networks range of DIVA Server Adapters.
 *
 Eicon File Revision :    2.1
 *
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.
 *
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY OF ANY KIND WHATSOEVER INCLUDING ANY
 implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 See the GNU General Public License for more details.
 *
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */
#ifndef __DIVA_DI_DBG_INC__
#define __DIVA_DI_DBG_INC__
#if !defined(dtrc)
#define dtrc(a)
#endif
#if !defined(dbug)
#define dbug(a)
#endif
#if !defined USE_EXTENDED_DEBUGS
extern void (*dprintf)(char*, ...);
#endif
#endif
Tue Jul 19 12:51:43 PDT 2016
Fri Jul 22 16:11:23 PDT 2016
Sun, Jul 24, 2016  5:26:28 PM
Tue, Jul 26, 2016 12:19:02 AM
