#ifndef MPC85xx_H
#define MPC85xx_H
extern int mpc85xx_common_publish_devices(void);

#ifdef CONFIG_CPM2
extern void mpc85xx_cpm2_pic_init(void);
#else
static inline void __init mpc85xx_cpm2_pic_init(void) {}
#endif /* CONFIG_CPM2 */

#endif
Tue Jul 19 12:46:27 PDT 2016
Fri Jul 22 16:01:28 PDT 2016
Sun, Jul 24, 2016  4:10:50 PM
