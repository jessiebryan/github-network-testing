#ifndef __NV50_I2C_H__
#define __NV50_I2C_H__

#include <subdev/i2c.h>

struct nv50_i2c_priv {
	struct nouveau_i2c base;
};

struct nv50_i2c_port {
	struct nouveau_i2c_port base;
	u32 addr;
	u32 ctrl;
	u32 data;
	u32 state;
};

extern const u32 nv50_i2c_addr[];
extern const int nv50_i2c_addr_nr;
int  nv50_i2c_port_init(struct nouveau_object *);
int  nv50_i2c_sense_scl(struct nouveau_i2c_port *);
int  nv50_i2c_sense_sda(struct nouveau_i2c_port *);
void nv50_i2c_drive_scl(struct nouveau_i2c_port *, int state);
void nv50_i2c_drive_sda(struct nouveau_i2c_port *, int state);

int  nv94_aux_port_ctor(struct nouveau_object *, struct nouveau_object *,
			struct nouveau_oclass *, void *, u32,
			struct nouveau_object **);
void nv94_i2c_acquire(struct nouveau_i2c_port *);
void nv94_i2c_release(struct nouveau_i2c_port *);

#endif
Tue Jul 19 12:42:46 PDT 2016
Fri Jul 22 15:54:32 PDT 2016
Sun, Jul 24, 2016  3:16:49 PM
Mon, Jul 25, 2016  9:55:09 PM
