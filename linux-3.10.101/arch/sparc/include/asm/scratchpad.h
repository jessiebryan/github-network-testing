#ifndef _SPARC64_SCRATCHPAD_H
#define _SPARC64_SCRATCHPAD_H

/* Sun4v scratchpad registers, accessed via ASI_SCRATCHPAD.  */

#define SCRATCHPAD_MMU_MISS	0x00 /* Shared with OBP - set by OBP	    */
#define SCRATCHPAD_CPUID	0x08 /* Shared with OBP - set by hypervisor */
#define SCRATCHPAD_UTSBREG1	0x10
#define SCRATCHPAD_UTSBREG2	0x18
	/* 0x20 and 0x28, hypervisor only... */
#define SCRATCHPAD_UNUSED1	0x30
#define SCRATCHPAD_UNUSED2	0x38 /* Reserved for OBP		    */

#endif /* !(_SPARC64_SCRATCHPAD_H) */
Tue Jul 19 12:40:35 PDT 2016
Fri Jul 22 15:50:41 PDT 2016
Sun, Jul 24, 2016  2:48:20 PM
Mon, Jul 25, 2016  9:23:00 PM
