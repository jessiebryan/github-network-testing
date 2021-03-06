#define IMPD1_OSC1	0x00
#define IMPD1_OSC2	0x04
#define IMPD1_LOCK	0x08
#define IMPD1_LEDS	0x0c
#define IMPD1_INT	0x10
#define IMPD1_SW	0x14
#define IMPD1_CTRL	0x18

#define IMPD1_CTRL_DISP_LCD	(0 << 0)
#define IMPD1_CTRL_DISP_VGA	(1 << 0)
#define IMPD1_CTRL_DISP_LCD1	(2 << 0)
#define IMPD1_CTRL_DISP_ENABLE	(1 << 2)
#define IMPD1_CTRL_DISP_MASK	(7 << 0)

struct device;

void impd1_tweak_control(struct device *dev, u32 mask, u32 val);

Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:02 PM
Mon, Jul 25, 2016  6:28:14 PM
Mon, Jul 25, 2016  7:41:21 PM
Tue, Jul 26, 2016  2:17:05 PM
