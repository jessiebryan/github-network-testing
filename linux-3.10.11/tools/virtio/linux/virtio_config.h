#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:42:28 PDT 2016
Fri Jul 22 15:54:00 PDT 2016
Sun, Jul 24, 2016  3:12:38 PM
