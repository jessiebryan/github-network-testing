#ifndef __LINUX_SPI_CORGI_LCD_H
#define __LINUX_SPI_CORGI_LCD_H

#define CORGI_LCD_MODE_QVGA	1
#define CORGI_LCD_MODE_VGA	2

struct corgi_lcd_platform_data {
	int	init_mode;
	int	max_intensity;
	int	default_intensity;
	int	limit_mask;

	int	gpio_backlight_on;	/* -1 if n/a */
	int	gpio_backlight_cont;	/* -1 if n/a */

	void (*notify)(int intensity);
	void (*kick_battery)(void);
};

#endif /* __LINUX_SPI_CORGI_LCD_H */
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:28 PDT 2016
Sun, Jul 24, 2016  4:34:08 PM
