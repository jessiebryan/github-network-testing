/*
 * include/asm-alpha/sysinfo.h
 */

#ifndef __ASM_ALPHA_SYSINFO_H
#define __ASM_ALPHA_SYSINFO_H

/* This defines the subset of the OSF/1 getsysinfo/setsysinfo calls
   that we support.  */

#define GSI_UACPROC			8
#define GSI_IEEE_FP_CONTROL		45
#define GSI_IEEE_STATE_AT_SIGNAL	46
#define GSI_PROC_TYPE			60
#define GSI_GET_HWRPB			101

#define SSI_NVPAIRS			1
#define SSI_IEEE_FP_CONTROL		14
#define SSI_IEEE_STATE_AT_SIGNAL	15
#define SSI_IEEE_IGNORE_STATE_AT_SIGNAL	16
#define SSI_IEEE_RAISE_EXCEPTION	1001	/* linux specific */

#define SSIN_UACPROC			6

#define UAC_BITMASK			7
#define UAC_NOPRINT			1
#define UAC_NOFIX			2
#define UAC_SIGBUS			4

#endif /* __ASM_ALPHA_SYSINFO_H */
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:47 PDT 2016
Sun, Jul 24, 2016  1:36:15 PM
Mon, Jul 25, 2016  8:00:25 PM
Tue, Jul 26, 2016  2:35:02 PM
