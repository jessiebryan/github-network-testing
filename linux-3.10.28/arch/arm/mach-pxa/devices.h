extern struct platform_device pxa_device_pmu;
extern struct platform_device pxa_device_mci;
extern struct platform_device pxa3xx_device_mci2;
extern struct platform_device pxa3xx_device_mci3;
extern struct platform_device pxa25x_device_udc;
extern struct platform_device pxa27x_device_udc;
extern struct platform_device pxa3xx_device_u2d;
extern struct platform_device pxa_device_fb;
extern struct platform_device pxa_device_ffuart;
extern struct platform_device pxa_device_btuart;
extern struct platform_device pxa_device_stuart;
extern struct platform_device pxa_device_hwuart;
extern struct platform_device pxa_device_i2c;
extern struct platform_device pxa_device_i2s;
extern struct platform_device pxa_device_ficp;
extern struct platform_device sa1100_device_rtc;
extern struct platform_device pxa_device_rtc;
extern struct platform_device pxa_device_ac97;

extern struct platform_device pxa27x_device_i2c_power;
extern struct platform_device pxa27x_device_ohci;
extern struct platform_device pxa27x_device_keypad;

extern struct platform_device pxa25x_device_ssp;
extern struct platform_device pxa25x_device_nssp;
extern struct platform_device pxa25x_device_assp;
extern struct platform_device pxa27x_device_ssp1;
extern struct platform_device pxa27x_device_ssp2;
extern struct platform_device pxa27x_device_ssp3;
extern struct platform_device pxa3xx_device_ssp4;

extern struct platform_device pxa25x_device_pwm0;
extern struct platform_device pxa25x_device_pwm1;
extern struct platform_device pxa27x_device_pwm0;
extern struct platform_device pxa27x_device_pwm1;

extern struct platform_device pxa3xx_device_nand;
extern struct platform_device pxa3xx_device_i2c_power;

extern struct platform_device pxa3xx_device_gcu;

extern struct platform_device pxa_device_asoc_platform;
extern struct platform_device pxa_device_asoc_ssp1;
extern struct platform_device pxa_device_asoc_ssp2;
extern struct platform_device pxa_device_asoc_ssp3;
extern struct platform_device pxa_device_asoc_ssp4;

extern struct platform_device pxa25x_device_gpio;
extern struct platform_device pxa27x_device_gpio;
extern struct platform_device pxa3xx_device_gpio;
extern struct platform_device pxa93x_device_gpio;

void __init pxa_register_device(struct platform_device *dev, void *data);
Tue Jul 19 12:52:45 PDT 2016
Fri Jul 22 16:13:25 PDT 2016
Sun, Jul 24, 2016  5:41:16 PM
Tue, Jul 26, 2016 12:35:21 AM
