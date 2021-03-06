#ifndef __LINUX_PWM_H
#define __LINUX_PWM_H

struct pwm_device;

/*
 * pwm_request - request a PWM device
 */
struct pwm_device *pwm_request(int pwm_id, const char *label);

/*
 * pwm_free - free a PWM device
 */
void pwm_free(struct pwm_device *pwm);

/*
 * pwm_config - change a PWM device configuration
 */
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns);

/*
 * pwm_enable - start a PWM output toggling
 */
int pwm_enable(struct pwm_device *pwm);

/*
 * pwm_disable - stop a PWM output toggling
 */
void pwm_disable(struct pwm_device *pwm);

#endif /* __LINUX_PWM_H */
Tue Jul 19 12:38:21 PDT 2016
Fri Jul 22 15:46:13 PDT 2016
Sun, Jul 24, 2016  2:16:17 PM
Mon, Jul 25, 2016  8:47:11 PM
