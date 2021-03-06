/*
 * Aic94xx SAS/SATA driver dump header file.
 *
 * Copyright (C) 2005 Adaptec, Inc.  All rights reserved.
 * Copyright (C) 2005 Luben Tuikov <luben_tuikov@adaptec.com>
 *
 * This file is licensed under GPLv2.
 *
 * This file is part of the aic94xx driver.
 *
 * The aic94xx driver is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * The aic94xx driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the aic94xx driver; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef _AIC94XX_DUMP_H_
#define _AIC94XX_DUMP_H_

#ifdef ASD_DEBUG

void asd_dump_seq_state(struct asd_ha_struct *asd_ha, u8 lseq_mask);
void asd_dump_frame_rcvd(struct asd_phy *phy,
			 struct done_list_struct *dl);
#else /* ASD_DEBUG */

static inline void asd_dump_seq_state(struct asd_ha_struct *asd_ha,
				      u8 lseq_mask) { }
static inline void asd_dump_frame_rcvd(struct asd_phy *phy,
				       struct done_list_struct *dl) { }
#endif /* ASD_DEBUG */

#endif /* _AIC94XX_DUMP_H_ */
Tue Jul 19 12:33:33 PDT 2016
Fri Jul 22 15:38:09 PDT 2016
Sun, Jul 24, 2016  1:16:33 PM
Mon, Jul 25, 2016  6:24:03 PM
Mon, Jul 25, 2016  7:37:15 PM
Tue, Jul 26, 2016  2:13:09 PM
