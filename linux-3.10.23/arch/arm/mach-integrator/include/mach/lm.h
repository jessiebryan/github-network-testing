
struct lm_device {
	struct device		dev;
	struct resource		resource;
	unsigned int		irq;
	unsigned int		id;
};

struct lm_driver {
	struct device_driver	drv;
	int			(*probe)(struct lm_device *);
	void			(*remove)(struct lm_device *);
	int			(*suspend)(struct lm_device *, pm_message_t);
	int			(*resume)(struct lm_device *);
};

int lm_driver_register(struct lm_driver *drv);
void lm_driver_unregister(struct lm_driver *drv);

int lm_device_register(struct lm_device *dev);

#define lm_get_drvdata(lm)	dev_get_drvdata(&(lm)->dev)
#define lm_set_drvdata(lm,d)	dev_set_drvdata(&(lm)->dev, d)
Tue Jul 19 12:49:30 PDT 2016
Fri Jul 22 16:07:08 PDT 2016
Sun, Jul 24, 2016  4:54:31 PM
Mon, Jul 25, 2016 11:43:47 PM
