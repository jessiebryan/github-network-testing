/*
 * CAAM public-level include definitions for the JobR backend
 *
 * Copyright 2008-2011 Freescale Semiconductor, Inc.
 */

#ifndef JR_H
#define JR_H

/* Prototypes for backend-level services exposed to APIs */
int caam_jr_register(struct device *ctrldev, struct device **rdev);
int caam_jr_deregister(struct device *rdev);
int caam_jr_enqueue(struct device *dev, u32 *desc,
		    void (*cbk)(struct device *dev, u32 *desc, u32 status,
				void *areq),
		    void *areq);

extern int caam_jr_probe(struct platform_device *pdev, struct device_node *np,
			 int ring);
extern int caam_jr_shutdown(struct device *dev);
#endif /* JR_H */
Tue Jul 19 12:37:29 PDT 2016
Fri Jul 22 15:44:40 PDT 2016
Sun, Jul 24, 2016  2:04:55 PM
Mon, Jul 25, 2016  8:34:20 PM
