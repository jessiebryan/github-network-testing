#ifndef RTL8180_RTL8225_H
#define RTL8180_RTL8225_H

#define RTL8225_ANAPARAM_ON	0xa0000b59
#define RTL8225_ANAPARAM2_ON	0x860dec11
#define RTL8225_ANAPARAM_OFF	0xa00beb59
#define RTL8225_ANAPARAM2_OFF	0x840dec11

const struct rtl818x_rf_ops * rtl8180_detect_rf(struct ieee80211_hw *);

static inline void rtl8225_write_phy_ofdm(struct ieee80211_hw *dev,
					  u8 addr, u8 data)
{
	rtl8180_write_phy(dev, addr, data);
}

static inline void rtl8225_write_phy_cck(struct ieee80211_hw *dev,
					 u8 addr, u8 data)
{
	rtl8180_write_phy(dev, addr, data | 0x10000);
}

#endif /* RTL8180_RTL8225_H */
Tue Jul 19 12:47:55 PDT 2016
Fri Jul 22 16:04:10 PDT 2016
Sun, Jul 24, 2016  4:31:45 PM
Mon, Jul 25, 2016 11:18:26 PM
