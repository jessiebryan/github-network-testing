/*
 * Definitions for talking to the CUDA.  The CUDA is a microcontroller
 * which controls the ADB, system power, RTC, and various other things.
 *
 * Copyright (C) 1996 Paul Mackerras.
 */
#ifndef _LINUX_CUDA_H
#define _LINUX_CUDA_H

#include <uapi/linux/cuda.h>


extern int find_via_cuda(void);
extern int cuda_request(struct adb_request *req,
			void (*done)(struct adb_request *), int nbytes, ...);
extern void cuda_poll(void);

#endif /* _LINUX_CUDA_H */
Tue Jul 19 12:44:54 PDT 2016
Fri Jul 22 15:58:26 PDT 2016
Sun, Jul 24, 2016  3:47:14 PM
Mon, Jul 25, 2016 10:28:55 PM
