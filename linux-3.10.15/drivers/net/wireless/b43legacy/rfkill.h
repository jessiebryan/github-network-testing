#ifndef B43legacy_RFKILL_H_
#define B43legacy_RFKILL_H_

struct ieee80211_hw;
struct b43legacy_wldev;

void b43legacy_rfkill_poll(struct ieee80211_hw *hw);

bool b43legacy_is_hw_radio_enabled(struct b43legacy_wldev *dev);

#endif /* B43legacy_RFKILL_H_ */
Tue Jul 19 12:44:47 PDT 2016
Fri Jul 22 15:58:13 PDT 2016
Sun, Jul 24, 2016  3:45:31 PM
Mon, Jul 25, 2016 10:27:01 PM
