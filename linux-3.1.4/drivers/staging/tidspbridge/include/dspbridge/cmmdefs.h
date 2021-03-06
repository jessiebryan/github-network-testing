/*
 * cmmdefs.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Global MEM constants and types.
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

#ifndef CMMDEFS_
#define CMMDEFS_


/* Cmm attributes used in cmm_create() */
struct cmm_mgrattrs {
	/* Minimum SM allocation; default 32 bytes. */
	u32 min_block_size;
};

/* Attributes for CMM_AllocBuf() & CMM_AllocDesc() */
struct cmm_attrs {
	u32 seg_id;		/*  1,2... are SM segments. 0 is not. */
	u32 alignment;		/*  0,1,2,4....min_block_size */
};

/*
 *  DSPPa to GPPPa Conversion Factor.
 *
 *  For typical platforms:
 *      converted Address = PaDSP + ( c_factor * addressToConvert).
 */
#define CMM_SUBFROMDSPPA	-1
#define CMM_ADDTODSPPA		1

#define CMM_ALLSEGMENTS         0xFFFFFF	/* All SegIds */
#define CMM_MAXGPPSEGS          1	/* Maximum # of SM segs */

/*
 *  SMSEGs are SM segments the DSP allocates from.
 *
 *  This info is used by the GPP to xlate DSP allocated PAs.
 */

struct cmm_seginfo {
	u32 seg_base_pa;	/* Start Phys address of SM segment */
	/* Total size in bytes of segment: DSP+GPP */
	u32 total_seg_size;
	u32 gpp_base_pa;	/* Start Phys addr of Gpp SM seg */
	u32 gpp_size;	/* Size of Gpp SM seg in bytes */
	u32 dsp_base_va;	/* DSP virt base byte address */
	u32 dsp_size;		/* DSP seg size in bytes */
	/* # of current GPP allocations from this segment */
	u32 in_use_cnt;
	u32 seg_base_va;	/* Start Virt address of SM seg */

};

/* CMM useful information */
struct cmm_info {
	/* # of SM segments registered with this Cmm. */
	u32 num_gppsm_segs;
	/* Total # of allocations outstanding for CMM */
	u32 total_in_use_cnt;
	/* Min SM block size allocation from cmm_create() */
	u32 min_block_size;
	/* Info per registered SM segment. */
	struct cmm_seginfo seg_info[CMM_MAXGPPSEGS];
};

/* XlatorCreate attributes */
struct cmm_xlatorattrs {
	u32 seg_id;		/* segment Id used for SM allocations */
	u32 dsp_bufs;		/* # of DSP-side bufs */
	u32 dsp_buf_size;	/* size of DSP-side bufs in GPP bytes */
	/* Vm base address alloc'd in client process context */
	void *vm_base;
	/* vm_size must be >= (dwMaxNumBufs * dwMaxSize) */
	u32 vm_size;
};

/*
 * Cmm translation types. Use to map SM addresses to process context.
 */
enum cmm_xlatetype {
	CMM_VA2PA = 0,		/* Virtual to GPP physical address xlation */
	CMM_PA2VA = 1,		/* GPP Physical to virtual */
	CMM_VA2DSPPA = 2,	/* Va to DSP Pa */
	CMM_PA2DSPPA = 3,	/* GPP Pa to DSP Pa */
	CMM_DSPPA2PA = 4,	/* DSP Pa to GPP Pa */
};

struct cmm_object;
struct cmm_xlatorobject;

#endif /* CMMDEFS_ */
Tue Jul 19 12:35:52 PDT 2016
Fri Jul 22 15:41:33 PDT 2016
Sun, Jul 24, 2016  1:41:50 PM
Mon, Jul 25, 2016  8:07:00 PM
Tue, Jul 26, 2016  2:41:14 PM
