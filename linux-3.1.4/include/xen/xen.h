#ifndef _XEN_XEN_H
#define _XEN_XEN_H

enum xen_domain_type {
	XEN_NATIVE,		/* running on bare hardware    */
	XEN_PV_DOMAIN,		/* running in a PV domain      */
	XEN_HVM_DOMAIN,		/* running in a Xen hvm domain */
};

#ifdef CONFIG_XEN
extern enum xen_domain_type xen_domain_type;
#else
#define xen_domain_type		XEN_NATIVE
#endif

#define xen_domain()		(xen_domain_type != XEN_NATIVE)
#define xen_pv_domain()		(xen_domain() &&			\
				 xen_domain_type == XEN_PV_DOMAIN)
#define xen_hvm_domain()	(xen_domain() &&			\
				 xen_domain_type == XEN_HVM_DOMAIN)

#ifdef CONFIG_XEN_DOM0
#include <xen/interface/xen.h>
#include <asm/xen/hypervisor.h>

#define xen_initial_domain()	(xen_pv_domain() && \
				 xen_start_info->flags & SIF_INITDOMAIN)
#else  /* !CONFIG_XEN_DOM0 */
#define xen_initial_domain()	(0)
#endif	/* CONFIG_XEN_DOM0 */

#endif	/* _XEN_XEN_H */
Tue Jul 19 12:36:01 PDT 2016
Fri Jul 22 15:41:50 PDT 2016
Sun, Jul 24, 2016  1:44:00 PM
Mon, Jul 25, 2016  8:09:33 PM
Tue, Jul 26, 2016  2:43:36 PM
