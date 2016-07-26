#ifndef B43_RFKILL_H_
#define B43_RFKILL_H_

struct ieee80211_hw;
struct b43_wldev;

void b43_rfkill_poll(struct ieee80211_hw *hw);

bool b43_is_hw_radio_enabled(struct b43_wldev *dev);

#endif /* B43_RFKILL_H_ */
Tue Jul 19 12:51:08 PDT 2016
Fri Jul 22 16:10:15 PDT 2016
Sun, Jul 24, 2016  5:17:58 PM
Tue, Jul 26, 2016 12:09:40 AM
