/* infutil.h -- types and macros common to blocks and codes
 * Copyright (C) 1995-1998 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h 
 */

/* WARNING: this file should *not* be used by applications. It is
   part of the implementation of the compression library and is
   subject to change. Applications should only use zlib.h.
 */

#ifndef _INFUTIL_H
#define _INFUTIL_H

#include <linux/zlib.h>

/* memory allocation for inflation */

struct inflate_workspace {
	struct inflate_state inflate_state;
	unsigned char working_window[1 << MAX_WBITS];
};

#define WS(z) ((struct inflate_workspace *)(z->workspace))

#endif
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:43 PDT 2016
Sun, Jul 24, 2016  1:35:47 PM
Mon, Jul 25, 2016  7:59:51 PM
Tue, Jul 26, 2016  2:34:31 PM
