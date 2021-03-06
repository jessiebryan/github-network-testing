/*
 * Freescale SPI controller driver cpm functions.
 *
 * Maintainer: Kumar Gala
 *
 * Copyright (C) 2006 Polycom, Inc.
 * Copyright 2010 Freescale Semiconductor, Inc.
 *
 * CPM SPI and QE buffer descriptors mode support:
 * Copyright (c) 2009  MontaVista Software, Inc.
 * Author: Anton Vorontsov <avorontsov@ru.mvista.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __SPI_FSL_CPM_H__
#define __SPI_FSL_CPM_H__

#include "spi-fsl-lib.h"

#ifdef CONFIG_FSL_SOC
extern void fsl_spi_cpm_reinit_txrx(struct mpc8xxx_spi *mspi);
extern int fsl_spi_cpm_bufs(struct mpc8xxx_spi *mspi,
			    struct spi_transfer *t, bool is_dma_mapped);
extern void fsl_spi_cpm_bufs_complete(struct mpc8xxx_spi *mspi);
extern void fsl_spi_cpm_irq(struct mpc8xxx_spi *mspi, u32 events);
extern int fsl_spi_cpm_init(struct mpc8xxx_spi *mspi);
extern void fsl_spi_cpm_free(struct mpc8xxx_spi *mspi);
#else
static inline void fsl_spi_cpm_reinit_txrx(struct mpc8xxx_spi *mspi) { }
static inline int fsl_spi_cpm_bufs(struct mpc8xxx_spi *mspi,
				   struct spi_transfer *t,
				   bool is_dma_mapped) { return 0; }
static inline void fsl_spi_cpm_bufs_complete(struct mpc8xxx_spi *mspi) { }
static inline void fsl_spi_cpm_irq(struct mpc8xxx_spi *mspi, u32 events) { }
static inline int fsl_spi_cpm_init(struct mpc8xxx_spi *mspi) { return 0; }
static inline void fsl_spi_cpm_free(struct mpc8xxx_spi *mspi) { }
#endif

#endif /* __SPI_FSL_CPM_H__ */
Tue Jul 19 12:49:13 PDT 2016
Fri Jul 22 16:06:38 PDT 2016
Sun, Jul 24, 2016  4:50:34 PM
Mon, Jul 25, 2016 11:39:23 PM
