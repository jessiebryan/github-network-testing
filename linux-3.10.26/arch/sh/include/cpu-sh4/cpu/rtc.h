#ifndef __ASM_SH_CPU_SH4_RTC_H
#define __ASM_SH_CPU_SH4_RTC_H

#if defined(CONFIG_CPU_SUBTYPE_SH7722) || defined(CONFIG_CPU_SUBTYPE_SH7723)
#define rtc_reg_size		sizeof(u16)
#else
#define rtc_reg_size		sizeof(u32)
#endif

#define RTC_BIT_INVERTED	0x40	/* bug on SH7750, SH7750S */
#define RTC_DEF_CAPABILITIES	RTC_CAP_4_DIGIT_YEAR

#endif /* __ASM_SH_CPU_SH4_RTC_H */
Tue Jul 19 12:51:38 PDT 2016
Fri Jul 22 16:11:14 PDT 2016
Sun, Jul 24, 2016  5:25:16 PM
Tue, Jul 26, 2016 12:17:42 AM
