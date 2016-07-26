//------------------------------------------------------------------------------
// <copyright file="ar6000_diag.h" company="Atheros">
//    Copyright (c) 2004-2010 Atheros Corporation.  All rights reserved.
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
// Author(s): ="Atheros"
//==============================================================================

#ifndef AR6000_DIAG_H_
#define AR6000_DIAG_H_


int
ar6000_ReadRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);

int
ar6000_WriteRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);

int
ar6000_ReadDataDiag(struct hif_device *hifDevice, u32 address,
                    u8 *data, u32 length);

int
ar6000_WriteDataDiag(struct hif_device *hifDevice, u32 address,
                     u8 *data, u32 length);

int
ar6k_ReadTargetRegister(struct hif_device *hifDevice, int regsel, u32 *regval);

void
ar6k_FetchTargetRegs(struct hif_device *hifDevice, u32 *targregs);

#endif /*AR6000_DIAG_H_*/
Tue Jul 19 12:34:11 PDT 2016
Fri Jul 22 15:39:14 PDT 2016
Sun, Jul 24, 2016  1:24:58 PM
Mon, Jul 25, 2016  6:34:09 PM
Mon, Jul 25, 2016  7:47:07 PM
Tue, Jul 26, 2016  2:22:34 PM
