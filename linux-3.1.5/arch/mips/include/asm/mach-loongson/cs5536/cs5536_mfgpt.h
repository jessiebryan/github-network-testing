/*
 * cs5536 mfgpt header file
 */

#ifndef _CS5536_MFGPT_H
#define _CS5536_MFGPT_H

#include <cs5536/cs5536.h>
#include <cs5536/cs5536_pci.h>

#ifdef CONFIG_CS5536_MFGPT
extern void setup_mfgpt0_timer(void);
extern void disable_mfgpt0_counter(void);
extern void enable_mfgpt0_counter(void);
#else
static inline void __maybe_unused setup_mfgpt0_timer(void)
{
}
static inline void __maybe_unused disable_mfgpt0_counter(void)
{
}
static inline void __maybe_unused enable_mfgpt0_counter(void)
{
}
#endif

#define MFGPT_TICK_RATE 14318000
#define COMPARE  ((MFGPT_TICK_RATE + HZ/2) / HZ)

#define MFGPT_BASE	mfgpt_base
#define MFGPT0_CMP2	(MFGPT_BASE + 2)
#define MFGPT0_CNT	(MFGPT_BASE + 4)
#define MFGPT0_SETUP	(MFGPT_BASE + 6)

#endif /*!_CS5536_MFGPT_H */
Tue Jul 19 12:36:12 PDT 2016
Fri Jul 22 15:42:12 PDT 2016
Sun, Jul 24, 2016  1:46:40 PM
Mon, Jul 25, 2016  8:12:43 PM
Tue, Jul 26, 2016  2:46:35 PM
