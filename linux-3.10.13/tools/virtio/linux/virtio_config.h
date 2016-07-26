#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:43:45 PDT 2016
Fri Jul 22 15:56:21 PDT 2016
Sun, Jul 24, 2016  3:31:04 PM
Mon, Jul 25, 2016 10:10:58 PM
