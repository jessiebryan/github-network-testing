
extern int acpi_suspend(u32 state);

extern void acpi_enable_wakeup_devices(u8 sleep_state);
extern void acpi_disable_wakeup_devices(u8 sleep_state);

extern struct list_head acpi_wakeup_device_list;
extern struct mutex acpi_device_lock;

extern void acpi_resume_power_resources(void);
Tue Jul 19 12:43:23 PDT 2016
Fri Jul 22 15:55:41 PDT 2016
Sun, Jul 24, 2016  3:25:51 PM
Mon, Jul 25, 2016 10:05:10 PM
