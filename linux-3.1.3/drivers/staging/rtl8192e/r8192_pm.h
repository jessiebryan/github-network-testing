/*
        Power management interface routines.
	Written by Mariusz Matuszek.
	This code is currently just a placeholder for later work and
	does not do anything useful.

	This is part of rtl8180 OpenSource driver.
	Copyright (C) Andrea Merello 2004  <andreamrl@tiscali.it>
	Released under the terms of GPL (General Public Licence)

*/

#ifndef R8192E_PM_H
#define R8192E_PM_H

#include <linux/types.h>
#include <linux/pci.h>

int rtl8192E_save_state (struct pci_dev *dev, pm_message_t state);
int rtl8192E_suspend (struct pci_dev *dev, pm_message_t state);
int rtl8192E_resume (struct pci_dev *dev);
int rtl8192E_enable_wake (struct pci_dev *dev, pm_message_t state, int enable);

#endif //R8192E_PM_H
Tue Jul 19 12:35:17 PDT 2016
Fri Jul 22 15:40:25 PDT 2016
Sun, Jul 24, 2016  1:33:29 PM
Mon, Jul 25, 2016  7:57:09 PM
Tue, Jul 26, 2016  2:32:00 PM
