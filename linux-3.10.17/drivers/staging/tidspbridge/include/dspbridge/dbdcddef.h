/*
 * dbdcddef.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * DCD (DSP/BIOS Bridge Configuration Database) constants and types.
 *
 * Copyright (C) 2008 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef DBDCDDEF_
#define DBDCDDEF_

#include <dspbridge/dbdefs.h>
#include <dspbridge/mgrpriv.h>	/* for mgr_processorextinfo */

/*
 *  The following defines are critical elements for the DCD module:
 *
 * - DCD_REGKEY enables DCD functions to locate registered DCD objects.
 * - DCD_REGISTER_SECTION identifies the COFF section where the UUID of
 *   registered DCD objects are stored.
 */
#define DCD_REGKEY              "Software\\TexasInstruments\\DspBridge\\DCD"
#define DCD_REGISTER_SECTION    ".dcd_register"

#define DCD_MAXPATHLENGTH    255

/* DCD Manager Object */
struct dcd_manager;

struct dcd_key_elem {
	struct list_head link;	/* Make it linked to a list */
	char name[DCD_MAXPATHLENGTH];	/*  Name of a given value entry */
	char *path;		/*  Pointer to the actual data */
};

/* DCD Node Properties */
struct dcd_nodeprops {
	struct dsp_ndbprops ndb_props;
	u32 msg_segid;
	u32 msg_notify_type;
	char *str_create_phase_fxn;
	char *str_delete_phase_fxn;
	char *str_execute_phase_fxn;
	char *str_i_alg_name;

	/* Dynamic load properties */
	u16 load_type;	/* Static, dynamic, overlay */
	u32 data_mem_seg_mask;		/* Data memory requirements */
	u32 code_mem_seg_mask;		/* Code memory requirements */
};

/* DCD Generic Object Type */
struct dcd_genericobj {
	union dcd_obj {
		struct dcd_nodeprops node_obj;	/* node object. */
		/* processor object. */
		struct dsp_processorinfo proc_info;
		/* extended proc object (private) */
		struct mgr_processorextinfo ext_proc_obj;
	} obj_data;
};

/* DCD Internal Callback Type */
typedef int(*dcd_registerfxn) (struct dsp_uuid *uuid_obj,
				      enum dsp_dcdobjtype obj_type,
				      void *handle);

#endif /* DBDCDDEF_ */
Tue Jul 19 12:46:02 PDT 2016
Fri Jul 22 16:00:40 PDT 2016
Sun, Jul 24, 2016  4:04:45 PM
Mon, Jul 25, 2016 10:48:26 PM
