
extern int acpi_suspend(u32 state);

extern void acpi_enable_wakeup_devices(u8 sleep_state);
extern void acpi_disable_wakeup_devices(u8 sleep_state);

extern struct list_head acpi_wakeup_device_list;
extern struct mutex acpi_device_lock;

extern void acpi_resume_power_resources(void);
Tue Jul 19 12:52:59 PDT 2016
Fri Jul 22 16:13:54 PDT 2016
Sun, Jul 24, 2016  5:44:43 PM
Tue, Jul 26, 2016 12:39:08 AM
