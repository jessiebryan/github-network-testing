#ifndef B43_RFKILL_H_
#define B43_RFKILL_H_

struct ieee80211_hw;
struct b43_wldev;

void b43_rfkill_poll(struct ieee80211_hw *hw);

bool b43_is_hw_radio_enabled(struct b43_wldev *dev);

#endif /* B43_RFKILL_H_ */
Tue Jul 19 12:53:05 PDT 2016
Fri Jul 22 16:14:03 PDT 2016
Sun, Jul 24, 2016  5:45:55 PM
Tue, Jul 26, 2016 12:40:27 AM
