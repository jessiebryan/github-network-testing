/******************************************************************************
 * Copyright(c) 2008 - 2010 Realtek Corporation. All rights reserved.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
******************************************************************************/

#ifndef R819x_WX_H
#define R819x_WX_H

struct net_device;
struct iw_handler_def;
struct iw_statistics;

extern struct iw_handler_def r8192_wx_handlers_def;
struct iw_statistics *r8192_get_wireless_stats(struct net_device *dev);
u16 rtl8192_11n_user_show_rates(struct net_device *dev);

#endif
Tue Jul 19 12:38:50 PDT 2016
Fri Jul 22 15:47:12 PDT 2016
Sun, Jul 24, 2016  2:23:16 PM
Mon, Jul 25, 2016  8:54:59 PM
