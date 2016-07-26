/*
 * (c) Copyright 2007 Hewlett-Packard Development Company, L.P.
 *        Contributed by Peter Keilty <peter.keilty@hp.com>
 *
 * fsyscall gettimeofday data
 */

struct fsyscall_gtod_data_t {
	seqcount_t	seq;
	struct timespec	wall_time;
	struct timespec monotonic_time;
	cycle_t		clk_mask;
	u32		clk_mult;
	u32		clk_shift;
	void		*clk_fsys_mmio;
	cycle_t		clk_cycle_last;
} ____cacheline_aligned;

struct itc_jitter_data_t {
	int		itc_jitter;
	cycle_t		itc_lastcycle;
} ____cacheline_aligned;

Tue Jul 19 12:50:53 PDT 2016
Fri Jul 22 16:09:46 PDT 2016
Sun, Jul 24, 2016  5:14:26 PM
Tue, Jul 26, 2016 12:05:44 AM
