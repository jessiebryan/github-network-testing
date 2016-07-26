#ifndef B43_RFKILL_H_
#define B43_RFKILL_H_

struct ieee80211_hw;
struct b43_wldev;

void b43_rfkill_poll(struct ieee80211_hw *hw);

bool b43_is_hw_radio_enabled(struct b43_wldev *dev);

#endif /* B43_RFKILL_H_ */
Tue Jul 19 12:49:49 PDT 2016
Fri Jul 22 16:07:46 PDT 2016
Sun, Jul 24, 2016  4:59:20 PM
Mon, Jul 25, 2016 11:49:07 PM
