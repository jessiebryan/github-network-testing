#ifndef __LBS_CFG80211_H__
#define __LBS_CFG80211_H__

struct device;
struct lbs_private;
struct regulatory_request;
struct wiphy;

struct wireless_dev *lbs_cfg_alloc(struct device *dev);
int lbs_cfg_register(struct lbs_private *priv);
void lbs_cfg_free(struct lbs_private *priv);

void lbs_send_disconnect_notification(struct lbs_private *priv);
void lbs_send_mic_failureevent(struct lbs_private *priv, u32 event);

void lbs_scan_done(struct lbs_private *priv);
void lbs_scan_deinit(struct lbs_private *priv);
int lbs_disconnect(struct lbs_private *priv, u16 reason);

#endif
Tue Jul 19 12:50:29 PDT 2016
Fri Jul 22 16:09:01 PDT 2016
Sun, Jul 24, 2016  5:08:44 PM
