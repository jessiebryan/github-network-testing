#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32

#define virtio_has_feature(dev, feature) \
	test_bit((feature), (dev)->features)

Tue Jul 19 12:45:03 PDT 2016
Fri Jul 22 15:58:44 PDT 2016
Sun, Jul 24, 2016  3:49:32 PM
Mon, Jul 25, 2016 10:31:30 PM
