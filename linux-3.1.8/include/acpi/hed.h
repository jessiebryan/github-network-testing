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
Tue Jul 19 12:37:39 PDT 2016
Fri Jul 22 15:45:00 PDT 2016
Sun, Jul 24, 2016  2:07:12 PM
Mon, Jul 25, 2016  8:37:05 PM
