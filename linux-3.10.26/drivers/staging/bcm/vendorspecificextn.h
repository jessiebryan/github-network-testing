
#ifndef __VENDOR_EXTN_NVM_H__
#define __VENDOR_EXTN_NVM_H__

#define CONTINUE_COMMON_PATH 0xFFFF

INT vendorextnGetSectionInfo(PVOID  pContext, struct bcm_flash2x_vendor_info *pVendorInfo);
INT vendorextnExit(struct bcm_mini_adapter *Adapter);
INT vendorextnInit(struct bcm_mini_adapter *Adapter);
INT vendorextnIoctl(struct bcm_mini_adapter *Adapter, UINT cmd, ULONG arg);
INT vendorextnReadSection(PVOID  pContext, PUCHAR pBuffer, enum bcm_flash2x_section_val SectionVal,
			UINT offset, UINT numOfBytes);
INT vendorextnWriteSection(PVOID  pContext, PUCHAR pBuffer, enum bcm_flash2x_section_val SectionVal,
			UINT offset, UINT numOfBytes, BOOLEAN bVerify);
INT vendorextnWriteSectionWithoutErase(PVOID  pContext, PUCHAR pBuffer, enum bcm_flash2x_section_val SectionVal,
			UINT offset, UINT numOfBytes);

#endif /*  */
Tue Jul 19 12:51:49 PDT 2016
Fri Jul 22 16:11:37 PDT 2016
Sun, Jul 24, 2016  5:27:48 PM
Tue, Jul 26, 2016 12:20:30 AM
