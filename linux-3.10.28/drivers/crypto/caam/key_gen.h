/*
 * CAAM/SEC 4.x definitions for handling key-generation jobs
 *
 * Copyright 2008-2011 Freescale Semiconductor, Inc.
 *
 */

struct split_key_result {
	struct completion completion;
	int err;
};

void split_key_done(struct device *dev, u32 *desc, u32 err, void *context);

int gen_split_key(struct device *jrdev, u8 *key_out, int split_key_len,
		    int split_key_pad_len, const u8 *key_in, u32 keylen,
		    u32 alg_op);
Tue Jul 19 12:53:00 PDT 2016
Fri Jul 22 16:13:54 PDT 2016
Sun, Jul 24, 2016  5:44:47 PM
Tue, Jul 26, 2016 12:39:13 AM
