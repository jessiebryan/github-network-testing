#ifndef _LINUX_ACPI_GPIO_H_
#define _LINUX_ACPI_GPIO_H_

#include <linux/device.h>
#include <linux/errno.h>
#include <linux/gpio.h>

/**
 * struct acpi_gpio_info - ACPI GPIO specific information
 * @gpioint: if %true this GPIO is of type GpioInt otherwise type is GpioIo
 */
struct acpi_gpio_info {
	bool gpioint;
};

#ifdef CONFIG_GPIO_ACPI

int acpi_get_gpio(char *path, int pin);
int acpi_get_gpio_by_index(struct device *dev, int index,
			   struct acpi_gpio_info *info);
void acpi_gpiochip_request_interrupts(struct gpio_chip *chip);
void acpi_gpiochip_free_interrupts(struct gpio_chip *chip);

#else /* CONFIG_GPIO_ACPI */

static inline int acpi_get_gpio(char *path, int pin)
{
	return -ENODEV;
}

static inline int acpi_get_gpio_by_index(struct device *dev, int index,
					 struct acpi_gpio_info *info)
{
	return -ENODEV;
}

static inline void acpi_gpiochip_request_interrupts(struct gpio_chip *chip) { }
static inline void acpi_gpiochip_free_interrupts(struct gpio_chip *chip) { }

#endif /* CONFIG_GPIO_ACPI */

#endif /* _LINUX_ACPI_GPIO_H_ */
Tue Jul 19 12:49:18 PDT 2016
Fri Jul 22 16:06:46 PDT 2016
Sun, Jul 24, 2016  4:51:40 PM
Mon, Jul 25, 2016 11:40:39 PM
