/* iTCO Vendor Specific Support hooks */
#ifdef CONFIG_ITCO_VENDOR_SUPPORT
extern void iTCO_vendor_pre_start(struct resource *, unsigned int);
extern void iTCO_vendor_pre_stop(struct resource *);
extern void iTCO_vendor_pre_keepalive(struct resource *, unsigned int);
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
Tue Jul 19 12:53:48 PDT 2016
Fri Jul 22 16:15:28 PDT 2016
Sun, Jul 24, 2016  5:56:25 PM
Tue, Jul 26, 2016 12:52:04 AM
