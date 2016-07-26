/*
 * Copyright (C) 2007-2010 Advanced Micro Devices, Inc.
 * Author: Joerg Roedel <joerg.roedel@amd.com>
 *         Leo Duran <leo.duran@amd.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#ifndef _ASM_X86_AMD_IOMMU_H
#define _ASM_X86_AMD_IOMMU_H

#include <linux/irqreturn.h>

#ifdef CONFIG_AMD_IOMMU

extern int amd_iommu_detect(void);

#else

static inline int amd_iommu_detect(void) { return -ENODEV; }

#endif

#endif /* _ASM_X86_AMD_IOMMU_H */
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:07 PM
Mon, Jul 25, 2016  6:35:32 PM
Mon, Jul 25, 2016  7:48:28 PM
Tue, Jul 26, 2016  2:23:51 PM
