#ifndef _XEN_SMP_H

extern void xen_send_IPI_mask(const struct cpumask *mask,
			      int vector);
extern void xen_send_IPI_mask_allbutself(const struct cpumask *mask,
				int vector);
extern void xen_send_IPI_allbutself(int vector);
extern void xen_send_IPI_all(int vector);
extern void xen_send_IPI_self(int vector);

#endif
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:24 PDT 2016
Sun, Jul 24, 2016  4:48:48 PM
