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
Tue Jul 19 12:33:32 PDT 2016
Fri Jul 22 15:38:07 PDT 2016
Sun, Jul 24, 2016  1:16:22 PM
Mon, Jul 25, 2016  6:23:50 PM
Mon, Jul 25, 2016  7:37:02 PM
Tue, Jul 26, 2016  2:12:57 PM
