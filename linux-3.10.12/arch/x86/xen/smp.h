#ifndef _XEN_SMP_H

extern void xen_send_IPI_mask(const struct cpumask *mask,
			      int vector);
extern void xen_send_IPI_mask_allbutself(const struct cpumask *mask,
				int vector);
extern void xen_send_IPI_allbutself(int vector);
extern void xen_send_IPI_all(int vector);
extern void xen_send_IPI_self(int vector);

#endif
Tue Jul 19 12:42:44 PDT 2016
Fri Jul 22 15:54:30 PDT 2016
Sun, Jul 24, 2016  3:16:31 PM
Mon, Jul 25, 2016  9:54:50 PM
