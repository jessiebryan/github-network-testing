#ifndef _VBSETMODE_
#define _VBSETMODE_

extern void InitTo330Pointer(unsigned char, struct vb_device_info *);
extern void XGI_UnLockCRT2(struct xgi_hw_device_info *HwDeviceExtension,
			   struct vb_device_info *);
extern void XGI_LockCRT2(struct xgi_hw_device_info *HwDeviceExtension,
			 struct vb_device_info *);
extern void XGI_DisplayOff(struct xgifb_video_info *,
			   struct xgi_hw_device_info *,
			   struct vb_device_info *);
extern void XGI_GetVBType(struct vb_device_info *);
extern void XGI_SenseCRT1(struct vb_device_info *);
extern unsigned char XGISetModeNew(struct xgifb_video_info *xgifb_info,
				   struct xgi_hw_device_info *HwDeviceExtension,
				   unsigned short ModeNo) ;

extern unsigned char XGI_SearchModeID(unsigned short ModeNo,
				      unsigned short *ModeIdIndex,
				      struct vb_device_info *);
extern unsigned char XGI_BridgeIsOn(struct vb_device_info *);
extern unsigned short XGI_GetRatePtrCRT2(struct xgi_hw_device_info *pXGIHWDE,
					 unsigned short ModeNo,
					 unsigned short ModeIdIndex,
					 struct vb_device_info *);

#endif
Tue Jul 19 12:49:53 PDT 2016
Fri Jul 22 16:07:54 PDT 2016
Sun, Jul 24, 2016  5:00:17 PM
Mon, Jul 25, 2016 11:50:10 PM
