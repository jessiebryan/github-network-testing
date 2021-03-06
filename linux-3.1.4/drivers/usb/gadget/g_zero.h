/*
 * This header declares the utility functions used by "Gadget Zero", plus
 * interfaces to its two single-configuration function drivers.
 */

#ifndef __G_ZERO_H
#define __G_ZERO_H

#include <linux/usb/composite.h>

/* global state */
extern unsigned buflen;
extern const struct usb_descriptor_header *otg_desc[];

/* common utilities */
struct usb_request *alloc_ep_req(struct usb_ep *ep);
void free_ep_req(struct usb_ep *ep, struct usb_request *req);
void disable_endpoints(struct usb_composite_dev *cdev,
		struct usb_ep *in, struct usb_ep *out);

/* configuration-specific linkup */
int sourcesink_add(struct usb_composite_dev *cdev, bool autoresume);
int loopback_add(struct usb_composite_dev *cdev, bool autoresume);

#endif /* __G_ZERO_H */
Tue Jul 19 12:35:53 PDT 2016
Fri Jul 22 15:41:35 PDT 2016
Sun, Jul 24, 2016  1:42:02 PM
Mon, Jul 25, 2016  8:07:14 PM
Tue, Jul 26, 2016  2:41:27 PM
