/******************************************************************************
 * console.h
 *
 * Console I/O interface for Xen guest OSes.
 *
 * Copyright (c) 2005, Keir Fraser
 */

#ifndef __XEN_PUBLIC_IO_CONSOLE_H__
#define __XEN_PUBLIC_IO_CONSOLE_H__

typedef uint32_t XENCONS_RING_IDX;

#define MASK_XENCONS_IDX(idx, ring) ((idx) & (sizeof(ring)-1))

struct xencons_interface {
    char in[1024];
    char out[2048];
    XENCONS_RING_IDX in_cons, in_prod;
    XENCONS_RING_IDX out_cons, out_prod;
};

#endif /* __XEN_PUBLIC_IO_CONSOLE_H__ */
Tue Jul 19 12:53:19 PDT 2016
Fri Jul 22 16:14:32 PDT 2016
Sun, Jul 24, 2016  5:49:27 PM
Tue, Jul 26, 2016 12:44:20 AM
