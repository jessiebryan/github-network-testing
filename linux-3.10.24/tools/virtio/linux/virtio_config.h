#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:50:46 PDT 2016
Fri Jul 22 16:09:31 PDT 2016
Sun, Jul 24, 2016  5:12:43 PM
Tue, Jul 26, 2016 12:03:50 AM
