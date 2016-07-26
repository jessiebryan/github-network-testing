/* bnx2x_fw_file_hdr.h: FW binary file header structure.
 *
 * Copyright (c) 2007-2013 Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 *
 * Maintained by: Eilon Greenstein <eilong@broadcom.com>
 * Written by: Vladislav Zolotarov <vladz@broadcom.com>
 * Based on the original idea of John Wright <john.wright@hp.com>.
 */

#ifndef BNX2X_INIT_FILE_HDR_H
#define BNX2X_INIT_FILE_HDR_H

struct bnx2x_fw_file_section {
	__be32 len;
	__be32 offset;
};

struct bnx2x_fw_file_hdr {
	struct bnx2x_fw_file_section init_ops;
	struct bnx2x_fw_file_section init_ops_offsets;
	struct bnx2x_fw_file_section init_data;
	struct bnx2x_fw_file_section tsem_int_table_data;
	struct bnx2x_fw_file_section tsem_pram_data;
	struct bnx2x_fw_file_section usem_int_table_data;
	struct bnx2x_fw_file_section usem_pram_data;
	struct bnx2x_fw_file_section csem_int_table_data;
	struct bnx2x_fw_file_section csem_pram_data;
	struct bnx2x_fw_file_section xsem_int_table_data;
	struct bnx2x_fw_file_section xsem_pram_data;
	struct bnx2x_fw_file_section iro_arr;
	struct bnx2x_fw_file_section fw_version;
};

#endif /* BNX2X_INIT_FILE_HDR_H */
Tue Jul 19 12:53:03 PDT 2016
Fri Jul 22 16:14:01 PDT 2016
Sun, Jul 24, 2016  5:45:39 PM
Tue, Jul 26, 2016 12:40:10 AM
