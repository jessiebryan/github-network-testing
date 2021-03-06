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

Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:16 PDT 2016
Sun, Jul 24, 2016  2:45:24 PM
Mon, Jul 25, 2016  9:19:39 PM
