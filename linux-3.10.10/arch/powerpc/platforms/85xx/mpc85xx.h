#ifndef MPC85xx_H
#define MPC85xx_H
extern int mpc85xx_common_publish_devices(void);

#ifdef CONFIG_CPM2
extern void mpc85xx_cpm2_pic_init(void);
#else
static inline void __init mpc85xx_cpm2_pic_init(void) {}
#endif /* CONFIG_CPM2 */

#endif
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:04 PDT 2016
Sun, Jul 24, 2016  2:29:27 PM
Mon, Jul 25, 2016  9:01:52 PM
