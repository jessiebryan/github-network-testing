
/*	From uart401.c */
int probe_uart401 (struct address_info *hw_config, struct module *owner);
void unload_uart401 (struct address_info *hw_config);

irqreturn_t uart401intr (int irq, void *dev_id);

/*	From mpu401.c */
int probe_mpu401(struct address_info *hw_config, struct resource *ports);
int attach_mpu401(struct address_info * hw_config, struct module *owner);
void unload_mpu401(struct address_info *hw_info);
Tue Jul 19 12:48:09 PDT 2016
Fri Jul 22 16:04:38 PDT 2016
Sun, Jul 24, 2016  4:35:22 PM
Mon, Jul 25, 2016 11:22:25 PM
