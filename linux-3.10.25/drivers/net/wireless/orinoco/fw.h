/* Firmware file reading and download helpers
 *
 * See copyright notice in main.c
 */
#ifndef _ORINOCO_FW_H_
#define _ORINOCO_FW_H_

/* Forward declations */
struct orinoco_private;

int orinoco_download(struct orinoco_private *priv);

#if defined(CONFIG_HERMES_CACHE_FW_ON_INIT) || defined(CONFIG_PM_SLEEP)
void orinoco_cache_fw(struct orinoco_private *priv, int ap);
void orinoco_uncache_fw(struct orinoco_private *priv);
#else
#define orinoco_cache_fw(priv, ap) do { } while (0)
#define orinoco_uncache_fw(priv) do { } while (0)
#endif

#endif /* _ORINOCO_FW_H_ */
Tue Jul 19 12:51:08 PDT 2016
Fri Jul 22 16:10:16 PDT 2016
Sun, Jul 24, 2016  5:18:04 PM
Tue, Jul 26, 2016 12:09:47 AM
