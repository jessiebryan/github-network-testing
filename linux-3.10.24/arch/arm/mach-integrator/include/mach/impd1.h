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

Tue Jul 19 12:50:08 PDT 2016
Fri Jul 22 16:08:22 PDT 2016
Sun, Jul 24, 2016  5:03:52 PM
Mon, Jul 25, 2016 11:54:02 PM
