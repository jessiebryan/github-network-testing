/* copyright (c) 2008, Intel Corporation
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Authors:
 * Eric Anholt <eric@anholt.net>
 */

#ifndef _INTEL_DISPLAY_H_
#define _INTEL_DISPLAY_H_

bool psb_intel_pipe_has_type(struct drm_crtc *crtc, int type);
void psb_intel_crtc_gamma_set(struct drm_crtc *crtc, u16 *red,
			 u16 *green, u16 *blue, uint32_t type, uint32_t size);
void psb_intel_crtc_destroy(struct drm_crtc *crtc);

#endif
Tue Jul 19 12:33:34 PDT 2016
Fri Jul 22 15:38:11 PDT 2016
Sun, Jul 24, 2016  1:16:52 PM
Mon, Jul 25, 2016  6:24:26 PM
Mon, Jul 25, 2016  7:37:37 PM
