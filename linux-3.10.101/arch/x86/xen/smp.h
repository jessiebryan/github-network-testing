#ifndef _XEN_SMP_H

extern void xen_send_IPI_mask(const struct cpumask *mask,
			      int vector);
extern void xen_send_IPI_mask_allbutself(const struct cpumask *mask,
				int vector);
extern void xen_send_IPI_allbutself(int vector);
extern void xen_send_IPI_all(int vector);
extern void xen_send_IPI_self(int vector);

#endif
Tue Jul 19 12:40:37 PDT 2016
Fri Jul 22 15:50:46 PDT 2016
Sun, Jul 24, 2016  2:48:53 PM
Mon, Jul 25, 2016  9:23:38 PM
