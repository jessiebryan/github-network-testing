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
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:22 PDT 2016
Sun, Jul 24, 2016  1:25:58 PM
Mon, Jul 25, 2016  6:35:21 PM
