#ifndef _XEN_SMP_H

extern void xen_send_IPI_mask(const struct cpumask *mask,
			      int vector);
extern void xen_send_IPI_mask_allbutself(const struct cpumask *mask,
				int vector);
extern void xen_send_IPI_allbutself(int vector);
extern void xen_send_IPI_all(int vector);
extern void xen_send_IPI_self(int vector);

#endif
Tue Jul 19 12:53:37 PDT 2016
Fri Jul 22 16:15:08 PDT 2016
Sun, Jul 24, 2016  5:53:56 PM
Tue, Jul 26, 2016 12:49:20 AM
