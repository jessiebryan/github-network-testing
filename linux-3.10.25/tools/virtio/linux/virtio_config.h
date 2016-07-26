#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:47 PDT 2016
Sun, Jul 24, 2016  5:22:02 PM
Tue, Jul 26, 2016 12:14:08 AM
