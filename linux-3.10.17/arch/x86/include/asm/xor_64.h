#ifndef _ASM_X86_XOR_64_H
#define _ASM_X86_XOR_64_H

static struct xor_block_template xor_block_sse = {
	.name = "generic_sse",
	.do_2 = xor_sse_2,
	.do_3 = xor_sse_3,
	.do_4 = xor_sse_4,
	.do_5 = xor_sse_5,
};


/* Also try the AVX routines */
#include <asm/xor_avx.h>

/* We force the use of the SSE xor block because it can write around L2.
   We may also be able to load into the L1 only depending on how the cpu
   deals with a load to a line that is being prefetched.  */
#undef XOR_TRY_TEMPLATES
#define XOR_TRY_TEMPLATES			\
do {						\
	AVX_XOR_SPEED;				\
	xor_speed(&xor_block_sse_pf64);		\
	xor_speed(&xor_block_sse);		\
} while (0)

#endif /* _ASM_X86_XOR_64_H */
Tue Jul 19 12:45:54 PDT 2016
Fri Jul 22 16:00:23 PDT 2016
Sun, Jul 24, 2016  4:02:33 PM
Mon, Jul 25, 2016 10:46:00 PM
