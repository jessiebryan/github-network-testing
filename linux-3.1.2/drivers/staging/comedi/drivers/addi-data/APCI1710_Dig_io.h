/*
 * Copyright (C) 2004,2005  ADDI-DATA GmbH for the source code of this module.
 *
 *	ADDI-DATA GmbH
 *	Dieselstrasse 3
 *	D-77833 Ottersweier
 *	Tel: +19(0)7223/9493-0
 *	Fax: +49(0)7223/9493-92
 *	http://www.addi-data.com
 *	info@addi-data.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 */

#define APCI1710_ON			1	/* Digital  Output ON or OFF */
#define APCI1710_OFF			0

#define APCI1710_INPUT			0	/* Digital I/O */
#define APCI1710_OUTPUT			1

#define APCI1710_DIGIO_MEMORYONOFF	0x10
#define APCI1710_DIGIO_INIT		0x11

/*
 * DIGITAL I/O INISIALISATION FUNCTION
 */
int i_APCI1710_InsnConfigDigitalIO(struct comedi_device *dev, struct comedi_subdevice *s,
				   struct comedi_insn *insn, unsigned int *data);

/*
 * INPUT OUTPUT  FUNCTIONS
 */
int i_APCI1710_InsnReadDigitalIOChlValue(struct comedi_device *dev,
					 struct comedi_subdevice *s,
					 struct comedi_insn *insn, unsigned int *data);

int i_APCI1710_InsnWriteDigitalIOChlOnOff(struct comedi_device *dev,
					  struct comedi_subdevice *s,
					  struct comedi_insn *insn, unsigned int *data);

int i_APCI1710_InsnBitsDigitalIOPortOnOff(struct comedi_device *dev,
					  struct comedi_subdevice *s,
					  struct comedi_insn *insn, unsigned int *data);
Tue Jul 19 12:34:11 PDT 2016
Fri Jul 22 15:39:15 PDT 2016
Sun, Jul 24, 2016  1:25:03 PM
Mon, Jul 25, 2016  6:34:15 PM
Mon, Jul 25, 2016  7:47:14 PM
Tue, Jul 26, 2016  2:22:40 PM
