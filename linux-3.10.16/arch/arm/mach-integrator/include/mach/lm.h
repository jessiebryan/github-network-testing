
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
Tue Jul 19 12:45:04 PDT 2016
Fri Jul 22 15:58:47 PDT 2016
Sun, Jul 24, 2016  3:49:56 PM
Mon, Jul 25, 2016 10:31:57 PM
