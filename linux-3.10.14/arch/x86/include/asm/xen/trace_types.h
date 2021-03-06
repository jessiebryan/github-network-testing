#ifndef _ASM_XEN_TRACE_TYPES_H
#define _ASM_XEN_TRACE_TYPES_H

enum xen_mc_flush_reason {
	XEN_MC_FL_NONE,		/* explicit flush */
	XEN_MC_FL_BATCH,	/* out of hypercall space */
	XEN_MC_FL_ARGS,		/* out of argument space */
	XEN_MC_FL_CALLBACK,	/* out of callback space */
};

enum xen_mc_extend_args {
	XEN_MC_XE_OK,
	XEN_MC_XE_BAD_OP,
	XEN_MC_XE_NO_SPACE
};
typedef void (*xen_mc_callback_fn_t)(void *);

#endif	/* _ASM_XEN_TRACE_TYPES_H */
Tue Jul 19 12:44:01 PDT 2016
Fri Jul 22 15:56:52 PDT 2016
Sun, Jul 24, 2016  3:34:53 PM
Mon, Jul 25, 2016 10:15:13 PM
