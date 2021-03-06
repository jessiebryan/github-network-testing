/*
 * chnlobj.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Structure subcomponents of channel class library channel objects which
 * are exposed to DSP API from Bridge driver.
 *
 * Copyright (C) 2005-2006 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef CHNLOBJ_
#define CHNLOBJ_

#include <dspbridge/chnldefs.h>
#include <dspbridge/dspdefs.h>

/*
 *  This struct is the first field in a chnl_mgr struct. Other. implementation
 *  specific fields follow this structure in memory.
 */
struct chnl_mgr_ {
	/* These must be the first fields in a chnl_mgr struct: */

	/* Function interface to Bridge driver. */
	struct bridge_drv_interface *intf_fxns;
};

/*
 *  This struct is the first field in a chnl_object struct. Other,
 *  implementation specific fields follow this structure in memory.
 */
struct chnl_object_ {
	/* These must be the first fields in a chnl_object struct: */
	struct chnl_mgr_ *chnl_mgr_obj;	/* Pointer back to channel manager. */
};

#endif /* CHNLOBJ_ */
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:13 PDT 2016
Sun, Jul 24, 2016  1:17:07 PM
Mon, Jul 25, 2016  6:24:44 PM
Mon, Jul 25, 2016  7:37:54 PM
Tue, Jul 26, 2016  2:13:49 PM
