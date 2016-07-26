/* iTCO Vendor Specific Support hooks */
#ifdef CONFIG_ITCO_VENDOR_SUPPORT
extern void iTCO_vendor_pre_start(unsigned long, unsigned int);
extern void iTCO_vendor_pre_stop(unsigned long);
extern void iTCO_vendor_pre_keepalive(unsigned long, unsigned int);
extern void iTCO_vendor_pre_set_heartbeat(unsigned int);
extern int iTCO_vendor_check_noreboot_on(void);
#else
#define iTCO_vendor_pre_start(acpibase, heartbeat)	{}
#define iTCO_vendor_pre_stop(acpibase)			{}
#define iTCO_vendor_pre_keepalive(acpibase, heartbeat)	{}
#define iTCO_vendor_pre_set_heartbeat(heartbeat)	{}
#define iTCO_vendor_check_noreboot_on()			1
				/* 1=check noreboot; 0=don't check */
#endif
Tue Jul 19 12:33:36 PDT 2016
Fri Jul 22 15:38:16 PDT 2016
Sun, Jul 24, 2016  1:17:26 PM
Mon, Jul 25, 2016  6:25:06 PM
Mon, Jul 25, 2016  7:38:17 PM
Tue, Jul 26, 2016  2:14:10 PM
