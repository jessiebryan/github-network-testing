#ifndef __alpha_regdef_h__
#define __alpha_regdef_h__

#define v0	$0	/* function return value */

#define t0	$1	/* temporary registers (caller-saved) */
#define t1	$2
#define t2	$3
#define t3	$4
#define t4	$5
#define t5	$6
#define t6	$7
#define t7	$8

#define	s0	$9	/* saved-registers (callee-saved registers) */
#define	s1	$10
#define	s2	$11
#define	s3	$12
#define	s4	$13
#define	s5	$14
#define	s6	$15
#define	fp	s6	/* frame-pointer (s6 in frame-less procedures) */

#define a0	$16	/* argument registers (caller-saved) */
#define a1	$17
#define a2	$18
#define a3	$19
#define a4	$20
#define a5	$21

#define t8	$22	/* more temps (caller-saved) */
#define t9	$23
#define t10	$24
#define t11	$25
#define ra	$26	/* return address register */
#define t12	$27

#define pv	t12	/* procedure-variable register */
#define AT	$at	/* assembler temporary */
#define gp	$29	/* global pointer */
#define sp	$30	/* stack pointer */
#define zero	$31	/* reads as zero, writes are noops */

#endif /* __alpha_regdef_h__ */
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:47 PDT 2016
Sun, Jul 24, 2016  1:36:14 PM
Mon, Jul 25, 2016  8:00:23 PM
Tue, Jul 26, 2016  2:35:01 PM
