/*
 * mcfclk.h -- coldfire specific clock structure
 */


#ifndef mcfclk_h
#define mcfclk_h

struct clk;

struct clk_ops {
	void (*enable)(struct clk *);
	void (*disable)(struct clk *);
};

struct clk {
	const char *name;
	struct clk_ops *clk_ops;
	unsigned long rate;
	unsigned long enabled;
	u8 slot;
};

extern struct clk *mcf_clks[];

#ifdef MCFPM_PPMCR0
extern struct clk_ops clk_ops0;
#ifdef MCFPM_PPMCR1
extern struct clk_ops clk_ops1;
#endif /* MCFPM_PPMCR1 */

#define DEFINE_CLK(clk_bank, clk_name, clk_slot, clk_rate) \
static struct clk __clk_##clk_bank##_##clk_slot = { \
	.name = clk_name, \
	.clk_ops = &clk_ops##clk_bank, \
	.rate = clk_rate, \
	.slot = clk_slot, \
}

void __clk_init_enabled(struct clk *);
void __clk_init_disabled(struct clk *);
#else
#define DEFINE_CLK(clk_ref, clk_name, clk_rate) \
        static struct clk clk_##clk_ref = { \
                .name = clk_name, \
                .rate = clk_rate, \
        }
#endif /* MCFPM_PPMCR0 */

#endif /* mcfclk_h */
Tue Jul 19 12:46:23 PDT 2016
Fri Jul 22 16:01:19 PDT 2016
Sun, Jul 24, 2016  4:09:48 PM
Mon, Jul 25, 2016 10:54:02 PM
