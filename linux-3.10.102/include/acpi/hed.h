/*
 * hed.h - ACPI Hardware Error Device
 *
 * Copyright (C) 2009, Intel Corp.
 *	Author: Huang Ying <ying.huang@intel.com>
 *
 * This file is released under the GPLv2.
 */

#ifndef ACPI_HED_H
#define ACPI_HED_H

#include <linux/notifier.h>

int register_acpi_hed_notifier(struct notifier_block *nb);
void unregister_acpi_hed_notifier(struct notifier_block *nb);

#endif
Tue Jul 19 12:41:27 PDT 2016
Fri Jul 22 15:52:28 PDT 2016
Sun, Jul 24, 2016  3:00:51 PM
Mon, Jul 25, 2016  9:37:08 PM
