/*
 * io.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * The io module manages IO between CHNL and msg_ctrl.
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

#ifndef IO_
#define IO_

#include <dspbridge/cfgdefs.h>
#include <dspbridge/devdefs.h>

/* IO Objects: */
struct io_mgr;

/* IO manager attributes: */
struct io_attrs {
	u8 birq;		/* Channel's I/O IRQ number. */
	bool irq_shared;	/* TRUE if the IRQ is shareable. */
	u32 word_size;		/* DSP Word size. */
	u32 shm_base;		/* Physical base address of shared memory. */
	u32 sm_length;		/* Size (in bytes) of shared memory. */
};


/*
 *  ======== io_create ========
 *  Purpose:
 *      Create an IO manager object, responsible for managing IO between
 *      CHNL and msg_ctrl.
 *  Parameters:
 *      channel_mgr:            Location to store a channel manager object on
 *                              output.
 *      hdev_obj:             Handle to a device object.
 *      mgr_attrts:              IO manager attributes.
 *      mgr_attrts->birq:        I/O IRQ number.
 *      mgr_attrts->irq_shared:     TRUE if the IRQ is shareable.
 *      mgr_attrts->word_size:   DSP Word size in equivalent PC bytes..
 *  Returns:
 *      0:                Success;
 *      -ENOMEM:            Insufficient memory for requested resources.
 *      -EIO:             Unable to plug channel ISR for configured IRQ.
 *      -EINVAL: Invalid DSP word size (must be > 0).
 *               Invalid base address for DSP communications.
 *  Requires:
 *      io_init(void) called.
 *      io_man != NULL.
 *      mgr_attrts != NULL.
 *  Ensures:
 */
extern int io_create(struct io_mgr **io_man,
			    struct dev_object *hdev_obj,
			    const struct io_attrs *mgr_attrts);

/*
 *  ======== io_destroy ========
 *  Purpose:
 *      Destroy the IO manager.
 *  Parameters:
 *      hio_mgr:         IOmanager object.
 *  Returns:
 *      0:        Success.
 *      -EFAULT:    hio_mgr was invalid.
 *  Requires:
 *      io_init(void) called.
 *  Ensures:
 */
extern int io_destroy(struct io_mgr *hio_mgr);

/*
 *  ======== io_exit ========
 *  Purpose:
 *      Discontinue usage of the IO module.
 *  Parameters:
 *  Returns:
 *  Requires:
 *      io_init(void) previously called.
 *  Ensures:
 *      Resources, if any acquired in io_init(void), are freed when the last
 *      client of IO calls io_exit(void).
 */
extern void io_exit(void);

/*
 *  ======== io_init ========
 *  Purpose:
 *      Initialize the IO module's private state.
 *  Parameters:
 *  Returns:
 *      TRUE if initialized; FALSE if error occurred.
 *  Requires:
 *  Ensures:
 *      A requirement for each of the other public CHNL functions.
 */
extern bool io_init(void);

#endif /* CHNL_ */
Tue Jul 19 12:36:26 PDT 2016
Fri Jul 22 15:42:40 PDT 2016
Sun, Jul 24, 2016  1:50:06 PM
Mon, Jul 25, 2016  8:16:44 PM
