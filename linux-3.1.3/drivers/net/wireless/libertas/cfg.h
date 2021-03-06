#ifndef __LBS_CFG80211_H__
#define __LBS_CFG80211_H__

struct device;
struct lbs_private;
struct regulatory_request;
struct wiphy;

struct wireless_dev *lbs_cfg_alloc(struct device *dev);
int lbs_cfg_register(struct lbs_private *priv);
void lbs_cfg_free(struct lbs_private *priv);

int lbs_reg_notifier(struct wiphy *wiphy,
		struct regulatory_request *request);

void lbs_send_disconnect_notification(struct lbs_private *priv);
void lbs_send_mic_failureevent(struct lbs_private *priv, u32 event);

void lbs_scan_deinit(struct lbs_private *priv);

#endif
Tue Jul 19 12:35:15 PDT 2016
Fri Jul 22 15:40:20 PDT 2016
Sun, Jul 24, 2016  1:32:52 PM
Mon, Jul 25, 2016  7:56:25 PM
Tue, Jul 26, 2016  2:31:19 PM
