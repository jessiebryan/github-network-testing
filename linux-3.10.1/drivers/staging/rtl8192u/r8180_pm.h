/*
	Power management interface routines.
	Written by Mariusz Matuszek.
	This code is currently just a placeholder for later work and
	does not do anything useful.

	This is part of rtl8180 OpenSource driver.
	Copyright (C) Andrea Merello 2004  <andreamrl@tiscali.it>
	Released under the terms of GPL (General Public Licence)

*/

#ifdef CONFIG_RTL8180_PM

#ifndef R8180_PM_H
#define R8180_PM_H

#include <linux/types.h>
#include <linux/pci.h>

int rtl8180_save_state (struct pci_dev *dev, u32 state);
int rtl8180_suspend (struct pci_dev *dev, u32 state);
int rtl8180_resume (struct pci_dev *dev);
int rtl8180_enable_wake (struct pci_dev *dev, u32 state, int enable);

#endif //R8180_PM_H

#endif // CONFIG_RTL8180_PM
Tue Jul 19 12:38:50 PDT 2016
Fri Jul 22 15:47:13 PDT 2016
Sun, Jul 24, 2016  2:23:17 PM
Mon, Jul 25, 2016  8:55:00 PM
