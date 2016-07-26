/******************************************************************************
 *
 * GPL LICENSE SUMMARY
 *
 * Copyright(c) 2008 - 2011 Intel Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110,
 * USA
 *
 * The full GNU General Public License is included in this distribution
 * in the file called LICENSE.GPL.
 *
 * Contact Information:
 *  Intel Linux Wireless <ilw@linux.intel.com>
 * Intel Corporation, 5200 N.E. Elam Young Parkway, Hillsboro, OR 97124-6497
 *****************************************************************************/

#include "iwl-dev.h"
#include "iwl-core.h"
#include "iwl-debug.h"

#ifdef CONFIG_IWLWIFI_LEGACY_DEBUGFS
ssize_t iwl4965_ucode_rx_stats_read(struct file *file, char __user *user_buf,
				size_t count, loff_t *ppos);
ssize_t iwl4965_ucode_tx_stats_read(struct file *file, char __user *user_buf,
				size_t count, loff_t *ppos);
ssize_t iwl4965_ucode_general_stats_read(struct file *file,
			char __user *user_buf, size_t count, loff_t *ppos);
#else
static ssize_t
iwl4965_ucode_rx_stats_read(struct file *file, char __user *user_buf,
				       size_t count, loff_t *ppos)
{
	return 0;
}
static ssize_t
iwl4965_ucode_tx_stats_read(struct file *file, char __user *user_buf,
				       size_t count, loff_t *ppos)
{
	return 0;
}
static ssize_t
iwl4965_ucode_general_stats_read(struct file *file, char __user *user_buf,
					    size_t count, loff_t *ppos)
{
	return 0;
}
#endif
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:11 PDT 2016
Sun, Jul 24, 2016  1:24:34 PM
Mon, Jul 25, 2016  6:33:41 PM
Mon, Jul 25, 2016  7:46:40 PM
Tue, Jul 26, 2016  2:22:09 PM
