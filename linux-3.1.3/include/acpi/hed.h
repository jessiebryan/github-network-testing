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
Tue Jul 19 12:35:20 PDT 2016
Fri Jul 22 15:40:30 PDT 2016
Sun, Jul 24, 2016  1:34:13 PM
Mon, Jul 25, 2016  7:58:00 PM
Tue, Jul 26, 2016  2:32:48 PM
