/******************************************************************************

    AudioScience HPI driver
    Copyright (C) 1997-2011  AudioScience Inc. <support@audioscience.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of version 2 of the GNU General Public License as
    published by the Free Software Foundation;

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 HPI Extended Message Handler Functions

(C) Copyright AudioScience Inc. 1997-2003
******************************************************************************/

#ifndef _HPIMSGX_H_
#define _HPIMSGX_H_

#include "hpi_internal.h"

#define HPIMSGX_ALLADAPTERS     (0xFFFF)

void hpi_send_recv_ex(struct hpi_message *phm, struct hpi_response *phr,
	void *h_owner);

#define HPI_MESSAGE_LOWER_LAYER hpi_send_recv_ex

#endif				/* _HPIMSGX_H_ */
Tue Jul 19 12:50:05 PDT 2016
Fri Jul 22 16:08:16 PDT 2016
Sun, Jul 24, 2016  5:03:11 PM
Mon, Jul 25, 2016 11:53:16 PM
