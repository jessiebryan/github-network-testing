/*
 * dspio.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Declares the upper edge IO functions required by all Bridge driver /DSP API
 * interface tables.
 *
 * Notes:
 *   Function comment headers reside in dspdefs.h.
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

#ifndef DSPIO_
#define DSPIO_

#include <dspbridge/devdefs.h>
#include <dspbridge/io.h>


extern int bridge_io_create(struct io_mgr **io_man,
				   struct dev_object *hdev_obj,
				   const struct io_attrs *mgr_attrts);

extern int bridge_io_destroy(struct io_mgr *hio_mgr);

extern int bridge_io_on_loaded(struct io_mgr *hio_mgr);

extern int bridge_io_get_proc_load(struct io_mgr *hio_mgr,
				       struct dsp_procloadstat *proc_lstat);

#endif /* DSPIO_ */
Tue Jul 19 12:35:52 PDT 2016
Fri Jul 22 15:41:34 PDT 2016
Sun, Jul 24, 2016  1:41:51 PM
Mon, Jul 25, 2016  8:07:01 PM
Tue, Jul 26, 2016  2:41:15 PM
