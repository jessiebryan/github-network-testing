#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:36 PDT 2016
Sun, Jul 24, 2016  5:49:59 PM
Tue, Jul 26, 2016 12:44:55 AM
