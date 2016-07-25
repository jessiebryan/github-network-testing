/*
 * Copyright (C) 2003-2004 Intel
 * Copyright (C) Tom Long Nguyen (tom.l.nguyen@intel.com)
 */

#ifndef MSI_H
#define MSI_H

#define msi_control_reg(base)		(base + PCI_MSI_FLAGS)
#define msi_lower_address_reg(base)	(base + PCI_MSI_ADDRESS_LO)
#define msi_upper_address_reg(base)	(base + PCI_MSI_ADDRESS_HI)
#define msi_data_reg(base, is64bit)	\
	(base + ((is64bit == 1) ? PCI_MSI_DATA_64 : PCI_MSI_DATA_32))
#define msi_mask_reg(base, is64bit)	\
	(base + ((is64bit == 1) ? PCI_MSI_MASK_64 : PCI_MSI_MASK_32))
#define is_64bit_address(control)	(!!(control & PCI_MSI_FLAGS_64BIT))
#define is_mask_bit_support(control)	(!!(control & PCI_MSI_FLAGS_MASKBIT))

#define msix_table_offset_reg(base)	(base + PCI_MSIX_TABLE)
#define msix_pba_offset_reg(base)	(base + PCI_MSIX_PBA)
#define msix_table_size(control) 	((control & PCI_MSIX_FLAGS_QSIZE)+1)
#define multi_msix_capable(control)	msix_table_size((control))

#endif /* MSI_H */
Tue Jul 19 12:35:15 PDT 2016
Fri Jul 22 15:40:21 PDT 2016
Sun, Jul 24, 2016  1:32:59 PM
