#ifndef _ASM_X86_IOMMU_H
#define _ASM_X86_IOMMU_H

extern struct dma_map_ops nommu_dma_ops;
extern int force_iommu, no_iommu;
extern int iommu_detected;
extern int iommu_pass_through;

/* 10 seconds */
#define DMAR_OPERATION_TIMEOUT ((cycles_t) tsc_khz*10*1000)

#endif /* _ASM_X86_IOMMU_H */
Tue Jul 19 12:41:15 PDT 2016
Fri Jul 22 15:52:02 PDT 2016
Sun, Jul 24, 2016  2:57:53 PM
Mon, Jul 25, 2016  9:33:48 PM
