/*
 * Decompression convenience functions
 *
 * Copyright 2007 David Gibson, IBM Corporation.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */
#ifndef _PPC_BOOT_GUNZIP_UTIL_H_
#define _PPC_BOOT_GUNZIP_UTIL_H_

#include "zlib.h"

/*
 * These functions are designed to make life easy for decompressing
 * kernel images, initrd images or any other gzip compressed image,
 * particularly if its useful to decompress part of the image (e.g. to
 * examine headers) before decompressing the remainder.
 *
 * To use:
 *     - declare a gunzip_state structure
 *     - use gunzip_start() to initialize the state, associating it
 *       with a stream of compressed data
 *     - use gunzip_partial(), gunzip_exactly() and gunzip_discard()
 *       in any combination to extract pieces of data from the stream
 *     - Finally use gunzip_finish() to extract the tail of the
 *       compressed stream and wind up zlib
 */

/* scratch space for gunzip; 46912 is from zlib_inflate_workspacesize() */
#define GUNZIP_SCRATCH_SIZE	46912

struct gunzip_state {
	z_stream s;
	char scratch[46912];
};

void gunzip_start(struct gunzip_state *state, void *src, int srclen);
int gunzip_partial(struct gunzip_state *state, void *dst, int dstlen);
void gunzip_exactly(struct gunzip_state *state, void *dst, int len);
void gunzip_discard(struct gunzip_state *state, int len);
int gunzip_finish(struct gunzip_state *state, void *dst, int len);

#endif /* _PPC_BOOT_GUNZIP_UTIL_H_ */
Tue Jul 19 12:43:57 PDT 2016
Fri Jul 22 15:56:41 PDT 2016
Sun, Jul 24, 2016  3:33:43 PM
Mon, Jul 25, 2016 10:13:55 PM
