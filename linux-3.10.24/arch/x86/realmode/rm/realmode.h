#ifndef ARCH_X86_REALMODE_RM_REALMODE_H
#define ARCH_X86_REALMODE_RM_REALMODE_H

#ifdef __ASSEMBLY__

/*
 * 16-bit ljmpw to the real_mode_seg
 *
 * This must be open-coded since gas will choke on using a
 * relocatable symbol for the segment portion.
 */
#define LJMPW_RM(to)	.byte 0xea ; .word (to), real_mode_seg

#endif /* __ASSEMBLY__ */

/*
 * Signature at the end of the realmode region
 */
#define REALMODE_END_SIGNATURE	0x65a22c82

#endif /* ARCH_X86_REALMODE_RM_REALMODE_H */
Tue Jul 19 12:50:23 PDT 2016
Fri Jul 22 16:08:49 PDT 2016
Sun, Jul 24, 2016  5:07:20 PM
Mon, Jul 25, 2016 11:57:54 PM
