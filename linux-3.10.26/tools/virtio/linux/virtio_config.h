#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:52:03 PDT 2016
Fri Jul 22 16:12:04 PDT 2016
Sun, Jul 24, 2016  5:31:21 PM
Tue, Jul 26, 2016 12:24:24 AM
