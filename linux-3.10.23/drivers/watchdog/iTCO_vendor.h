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
Tue Jul 19 12:49:54 PDT 2016
Fri Jul 22 16:07:56 PDT 2016
Sun, Jul 24, 2016  5:00:30 PM
Mon, Jul 25, 2016 11:50:25 PM
