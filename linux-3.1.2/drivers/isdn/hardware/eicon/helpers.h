
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
#ifndef __DIVA_XDI_CARD_CONFIG_HELPERS_INC__
#define __DIVA_XDI_CARD_CONFIG_HELPERS_INC__
dword diva_get_protocol_file_features  (byte* File,
                      int offset,
                      char *IdStringBuffer,
                      dword IdBufferSize);
void diva_configure_protocol (PISDN_ADAPTER IoAdapter);
/*
 Low level file access system abstraction
 */
/* -------------------------------------------------------------------------
  Access to single file
  Return pointer to the image of the requested file,
  write image length to 'FileLength'
  ------------------------------------------------------------------------- */
void *xdiLoadFile (char *FileName, dword *FileLength, unsigned long MaxLoadSize) ;
/* -------------------------------------------------------------------------
  Dependent on the protocol settings does read return pointer
  to the image of appropriate protocol file
  ------------------------------------------------------------------------- */
void *xdiLoadArchive (PISDN_ADAPTER IoAdapter, dword *FileLength, unsigned long MaxLoadSize) ;
/* --------------------------------------------------------------------------
  Free all system resources accessed by xdiLoadFile and xdiLoadArchive
  -------------------------------------------------------------------------- */
void xdiFreeFile (void* handle);
#endif
Tue Jul 19 12:34:06 PDT 2016
Fri Jul 22 15:39:05 PDT 2016
Sun, Jul 24, 2016  1:23:52 PM
Mon, Jul 25, 2016  6:32:50 PM
Mon, Jul 25, 2016  7:45:50 PM
Tue, Jul 26, 2016  2:21:23 PM
