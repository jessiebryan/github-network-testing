#ifndef __ROMIMAGE_MACRO_H
#define __ROMIMAGE_MACRO_H

/* The LIST command is used to include comments in the script */
.macro	LIST comment
.endm

/* The ED command is used to write a 32-bit word */
.macro  ED, addr, data
	mov.l 1f, r1
	mov.l 2f, r0
	mov.l r0, @r1
	bra 3f
	 nop
	.align 2
1 :	.long \addr
2 :	.long \data
3 :
.endm

/* The EW command is used to write a 16-bit word */
.macro  EW, addr, data
	mov.l 1f, r1
	mov.l 2f, r0
	mov.w r0, @r1
	bra 3f
	 nop
	.align 2
1 :	.long \addr
2 :	.long \data
3 :
.endm

/* The EB command is used to write an 8-bit word */
.macro  EB, addr, data
	mov.l 1f, r1
	mov.l 2f, r0
	mov.b r0, @r1
	bra 3f
	 nop
	.align 2
1 :	.long \addr
2 :	.long \data
3 :
.endm

/* The WAIT command is used to delay the execution */
.macro  WAIT, time
	mov.l  2f, r3
1 :
	nop
	tst     r3, r3
	bf/s    1b
	dt      r3
	bra	3f
	 nop
	.align 2
2 :	.long \time * 100
3 :
.endm

/* The DD command is used to read a 32-bit word */
.macro  DD, addr, addr2, nr
	mov.l 1f, r1
	mov.l @r1, r0
	bra 2f
	 nop
	.align 2
1 :	.long \addr
2 :
.endm

#endif /* __ROMIMAGE_MACRO_H */
Tue Jul 19 12:36:16 PDT 2016
Fri Jul 22 15:42:19 PDT 2016
Sun, Jul 24, 2016  1:47:34 PM
Mon, Jul 25, 2016  8:13:47 PM
