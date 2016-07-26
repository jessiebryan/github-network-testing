#ifndef _ASM_X86_IOMMU_H
#define _ASM_X86_IOMMU_H

extern struct dma_map_ops nommu_dma_ops;
extern int force_iommu, no_iommu;
extern int iommu_detected;
extern int iommu_pass_through;

/* 10 seconds */
#define DMAR_OPERATION_TIMEOUT ((cycles_t) tsc_khz*10*1000)

#endif /* _ASM_X86_IOMMU_H */
Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:18 PDT 2016
Sun, Jul 24, 2016  5:25:45 PM
Tue, Jul 26, 2016 12:18:15 AM
