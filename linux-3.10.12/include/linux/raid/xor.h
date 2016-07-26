#ifndef _XOR_H
#define _XOR_H

#define MAX_XOR_BLOCKS 4

extern void xor_blocks(unsigned int count, unsigned int bytes,
	void *dest, void **srcs);

struct xor_block_template {
        struct xor_block_template *next;
        const char *name;
        int speed;
	void (*do_2)(unsigned long, unsigned long *, unsigned long *);
	void (*do_3)(unsigned long, unsigned long *, unsigned long *,
		     unsigned long *);
	void (*do_4)(unsigned long, unsigned long *, unsigned long *,
		     unsigned long *, unsigned long *);
	void (*do_5)(unsigned long, unsigned long *, unsigned long *,
		     unsigned long *, unsigned long *, unsigned long *);
};

#endif
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:58 PDT 2016
Sun, Jul 24, 2016  3:20:14 PM
Mon, Jul 25, 2016  9:58:56 PM
