/* Helpers for managing scan queues
 *
 * See copyright notice in main.c
 */
#ifndef _ORINOCO_SCAN_H_
#define _ORINOCO_SCAN_H_

/* Forward declarations */
struct orinoco_private;
struct agere_ext_scan_info;

/* Add scan results */
void orinoco_add_extscan_result(struct orinoco_private *priv,
				struct agere_ext_scan_info *atom,
				size_t len);
void orinoco_add_hostscan_results(struct orinoco_private *dev,
				  unsigned char *buf,
				  size_t len);
void orinoco_scan_done(struct orinoco_private *priv, bool abort);

#endif /* _ORINOCO_SCAN_H_ */
Tue Jul 19 12:46:37 PDT 2016
Fri Jul 22 16:01:47 PDT 2016
Sun, Jul 24, 2016  4:13:15 PM
Mon, Jul 25, 2016 10:57:53 PM
