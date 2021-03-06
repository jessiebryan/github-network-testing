/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

/**
 * @file drv_pcie_rc_intf.h
 * Interface definitions for the PCIE Root Complex.
 */

#ifndef _SYS_HV_DRV_PCIE_RC_INTF_H
#define _SYS_HV_DRV_PCIE_RC_INTF_H

/** File offset for reading the interrupt base number used for PCIE legacy
    interrupts and PLX Gen 1 requirement flag */
#define PCIE_RC_CONFIG_MASK_OFF 0


/**
 * Structure used for obtaining PCIe config information, read from the PCIE
 * subsystem /ctl file at initialization
 */
typedef struct pcie_rc_config
{
  int intr;                     /**< interrupt number used for downcall */
  int plx_gen1;                 /**< flag for PLX Gen 1 configuration */
} pcie_rc_config_t;

#endif  /* _SYS_HV_DRV_PCIE_RC_INTF_H */
Tue Jul 19 12:47:47 PDT 2016
Fri Jul 22 16:03:56 PDT 2016
Sun, Jul 24, 2016  4:29:55 PM
Mon, Jul 25, 2016 11:16:23 PM
