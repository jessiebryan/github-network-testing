#ifndef B43_RFKILL_H_
#define B43_RFKILL_H_

struct ieee80211_hw;
struct b43_wldev;

void b43_rfkill_poll(struct ieee80211_hw *hw);

bool b43_is_hw_radio_enabled(struct b43_wldev *dev);

#endif /* B43_RFKILL_H_ */
Tue Jul 19 12:33:31 PDT 2016
Fri Jul 22 15:38:06 PDT 2016
Sun, Jul 24, 2016  1:16:17 PM
Mon, Jul 25, 2016  6:23:45 PM
Mon, Jul 25, 2016  7:36:56 PM
Tue, Jul 26, 2016  2:12:52 PM
