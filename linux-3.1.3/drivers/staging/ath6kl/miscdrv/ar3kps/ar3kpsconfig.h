/*
 * Copyright (c) 2004-2010 Atheros Communications Inc.
 * All rights reserved.
 *
 * This file defines the symbols exported by Atheros PS and patch download module.
 * define the constant HCI_TRANSPORT_SDIO if the module is being used for HCI SDIO transport.
 * defined.
 *
 *
 * ar3kcpsconfig.h
 *
 *
 *
 * The software source and binaries included in this development package are
 * licensed, not sold. You, or your company, received the package under one
 * or more license agreements. The rights granted to you are specifically
 * listed in these license agreement(s). All other rights remain with Atheros
 * Communications, Inc., its subsidiaries, or the respective owner including
 * those listed on the included copyright notices..  Distribution of any
 * portion of this package must be in strict compliance with the license
 * agreement(s) terms.
 *
 *
 *
 */



#ifndef __AR3KPSCONFIG_H
#define __AR3KPSCONFIG_H

/* 
 * Define the flag HCI_TRANSPORT_SDIO and undefine HCI_TRANSPORT_UART if the transport being used is SDIO.
 */
#undef HCI_TRANSPORT_UART

#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/signal.h>


#include <linux/ioctl.h>
#include <linux/firmware.h>


#include <net/bluetooth/bluetooth.h>
#include <net/bluetooth/hci_core.h>

#include "ar3kpsparser.h"

#define FPGA_REGISTER	0x4FFC
#define BDADDR_TYPE_STRING	0
#define BDADDR_TYPE_HEX		1
#define CONFIG_PATH	  "ar3k"

#define PS_ASIC_FILE      "PS_ASIC.pst"
#define PS_FPGA_FILE      "PS_FPGA.pst"

#define PATCH_FILE      "RamPatch.txt"
#define BDADDR_FILE "ar3kbdaddr.pst"

#define ROM_VER_AR3001_3_1_0	30000
#define ROM_VER_AR3001_3_1_1	30101	


#ifndef HCI_TRANSPORT_SDIO
#define struct ar3k_config_info        struct hci_dev
extern wait_queue_head_t HciEvent;
extern wait_queue_t Eventwait;
extern u8 *HciEventpacket;
#endif /* #ifndef HCI_TRANSPORT_SDIO */

int AthPSInitialize(struct ar3k_config_info *hdev);
int ReadPSEvent(u8* Data);
#endif /* __AR3KPSCONFIG_H */
Tue Jul 19 12:35:16 PDT 2016
Fri Jul 22 15:40:23 PDT 2016
Sun, Jul 24, 2016  1:33:15 PM
Mon, Jul 25, 2016  7:56:52 PM
Tue, Jul 26, 2016  2:31:44 PM
