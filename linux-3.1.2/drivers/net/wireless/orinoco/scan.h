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
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:12 PDT 2016
Sun, Jul 24, 2016  1:24:38 PM
Mon, Jul 25, 2016  6:33:45 PM
Mon, Jul 25, 2016  7:46:44 PM
Tue, Jul 26, 2016  2:22:13 PM
