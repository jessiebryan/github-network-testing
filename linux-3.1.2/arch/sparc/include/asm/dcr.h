#ifndef _SPARC64_DCR_H
#define _SPARC64_DCR_H

/* UltraSparc-III/III+ Dispatch Control Register, ASR 0x12 */
#define DCR_DPE		0x0000000000001000 /* III+: D$ Parity Error Enable	*/
#define DCR_OBS		0x0000000000000fc0 /* Observability Bus Controls	*/
#define DCR_BPE		0x0000000000000020 /* Branch Predict Enable		*/
#define DCR_RPE		0x0000000000000010 /* Return Address Prediction Enable	*/
#define DCR_SI		0x0000000000000008 /* Single Instruction Disable	*/
#define DCR_IPE		0x0000000000000004 /* III+: I$ Parity Error Enable	*/
#define DCR_IFPOE	0x0000000000000002 /* IRQ FP Operation Enable		*/
#define DCR_MS		0x0000000000000001 /* Multi-Scalar dispatch		*/

#endif /* _SPARC64_DCR_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:58 PDT 2016
Sun, Jul 24, 2016  1:22:57 PM
Mon, Jul 25, 2016  6:31:43 PM
Mon, Jul 25, 2016  7:44:46 PM
Tue, Jul 26, 2016  2:20:21 PM
