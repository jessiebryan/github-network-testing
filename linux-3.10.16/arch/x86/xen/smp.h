#ifndef _XEN_SMP_H

extern void xen_send_IPI_mask(const struct cpumask *mask,
			      int vector);
extern void xen_send_IPI_mask_allbutself(const struct cpumask *mask,
				int vector);
extern void xen_send_IPI_allbutself(int vector);
extern void xen_send_IPI_all(int vector);
extern void xen_send_IPI_self(int vector);

#endif
Tue Jul 19 12:45:18 PDT 2016
Fri Jul 22 15:59:14 PDT 2016
Sun, Jul 24, 2016  3:53:26 PM
Mon, Jul 25, 2016 10:35:50 PM
