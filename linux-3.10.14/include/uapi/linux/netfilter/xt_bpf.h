#ifndef _XT_BPF_H
#define _XT_BPF_H

#include <linux/filter.h>
#include <linux/types.h>

#define XT_BPF_MAX_NUM_INSTR	64

struct xt_bpf_info {
	__u16 bpf_program_num_elem;
	struct sock_filter bpf_program[XT_BPF_MAX_NUM_INSTR];

	/* only used in the kernel */
	struct sk_filter *filter __attribute__((aligned(8)));
};

#endif /*_XT_BPF_H */
Tue Jul 19 12:44:21 PDT 2016
Fri Jul 22 15:57:27 PDT 2016
Sun, Jul 24, 2016  3:39:33 PM
Mon, Jul 25, 2016 10:20:22 PM
