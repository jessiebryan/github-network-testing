/*
 * drivers/mfd/mfd-core.h
 *
 * core MFD support
 * Copyright (c) 2006 Ian Molton
 * Copyright (c) 2007 Dmitry Baryshkov
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef MFD_CORE_H
#define MFD_CORE_H

#include <linux/platform_device.h>

/*
 * This struct describes the MFD part ("cell").
 * After registration the copy of this structure will become the platform data
 * of the resulting platform_device
 */
struct mfd_cell {
	const char		*name;
	int			id;

	/* refcounting for multiple drivers to use a single cell */
	atomic_t		*usage_count;
	int			(*enable)(struct platform_device *dev);
	int			(*disable)(struct platform_device *dev);

	int			(*suspend)(struct platform_device *dev);
	int			(*resume)(struct platform_device *dev);

	/* platform data passed to the sub devices drivers */
	void			*platform_data;
	size_t			pdata_size;

	/*
	 * These resources can be specified relative to the parent device.
	 * For accessing hardware you should use resources from the platform dev
	 */
	int			num_resources;
	const struct resource	*resources;

	/* don't check for resource conflicts */
	bool			ignore_resource_conflicts;

	/*
	 * Disable runtime PM callbacks for this subdevice - see
	 * pm_runtime_no_callbacks().
	 */
	bool			pm_runtime_no_callbacks;
};

/*
 * Convenience functions for clients using shared cells.  Refcounting
 * happens automatically, with the cell's enable/disable callbacks
 * being called only when a device is first being enabled or no other
 * clients are making use of it.
 */
extern int mfd_cell_enable(struct platform_device *pdev);
extern int mfd_cell_disable(struct platform_device *pdev);

/*
 * "Clone" multiple platform devices for a single cell. This is to be used
 * for devices that have multiple users of a cell.  For example, if an mfd
 * driver wants the cell "foo" to be used by a GPIO driver, an MTD driver,
 * and a platform driver, the following bit of code would be use after first
 * calling mfd_add_devices():
 *
 * const char *fclones[] = { "foo-gpio", "foo-mtd" };
 * err = mfd_clone_cells("foo", fclones, ARRAY_SIZE(fclones));
 *
 * Each driver (MTD, GPIO, and platform driver) would then register
 * platform_drivers for "foo-mtd", "foo-gpio", and "foo", respectively.
 * The cell's .enable/.disable hooks should be used to deal with hardware
 * resource contention.
 */
extern int mfd_clone_cell(const char *cell, const char **clones,
		size_t n_clones);

/*
 * Given a platform device that's been created by mfd_add_devices(), fetch
 * the mfd_cell that created it.
 */
static inline const struct mfd_cell *mfd_get_cell(struct platform_device *pdev)
{
	return pdev->mfd_cell;
}

extern int mfd_add_devices(struct device *parent, int id,
			   struct mfd_cell *cells, int n_devs,
			   struct resource *mem_base,
			   int irq_base);

extern void mfd_remove_devices(struct device *parent);

#endif
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:02 PM
Mon, Jul 25, 2016  8:08:25 PM
Tue, Jul 26, 2016  2:42:33 PM
