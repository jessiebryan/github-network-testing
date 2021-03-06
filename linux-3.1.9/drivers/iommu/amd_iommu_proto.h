/*
 * Copyright (C) 2009-2010 Advanced Micro Devices, Inc.
 * Author: Joerg Roedel <joerg.roedel@amd.com>
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

#ifndef _ASM_X86_AMD_IOMMU_PROTO_H
#define _ASM_X86_AMD_IOMMU_PROTO_H

#include "amd_iommu_types.h"

extern int amd_iommu_init_dma_ops(void);
extern int amd_iommu_init_passthrough(void);
extern irqreturn_t amd_iommu_int_thread(int irq, void *data);
extern irqreturn_t amd_iommu_int_handler(int irq, void *data);
extern void amd_iommu_apply_erratum_63(u16 devid);
extern void amd_iommu_reset_cmd_buffer(struct amd_iommu *iommu);
extern int amd_iommu_init_devices(void);
extern void amd_iommu_uninit_devices(void);
extern void amd_iommu_init_notifier(void);
extern void amd_iommu_init_api(void);
#ifndef CONFIG_AMD_IOMMU_STATS

static inline void amd_iommu_stats_init(void) { }

#endif /* !CONFIG_AMD_IOMMU_STATS */

static inline bool is_rd890_iommu(struct pci_dev *pdev)
{
	return (pdev->vendor == PCI_VENDOR_ID_ATI) &&
	       (pdev->device == PCI_DEVICE_ID_RD890_IOMMU);
}

static inline bool iommu_feature(struct amd_iommu *iommu, u64 f)
{
	if (!(iommu->cap & (1 << IOMMU_CAP_EFR)))
		return false;

	return !!(iommu->features & f);
}

#endif /* _ASM_X86_AMD_IOMMU_PROTO_H  */
Tue Jul 19 12:38:08 PDT 2016
Fri Jul 22 15:45:48 PDT 2016
Sun, Jul 24, 2016  2:13:19 PM
Mon, Jul 25, 2016  8:43:55 PM
