/*
 * Linux cfg80211 vendor command/event handlers of DHD
 *
 * $Copyright Open Broadcom Corporation$
 *
 * $Id: dhd_cfg_vendor.c 487126 2014-06-24 23:06:12Z $
 */

#include <linuxver.h>
#include <net/cfg80211.h>
#include <net/netlink.h>

#include <bcmutils.h>
#include <wl_cfg80211.h>
#include <wl_cfgvendor.h>
#include <dngl_stats.h>
#include <dhd.h>
#include <dhdioctl.h>
#include <brcm_nl80211.h>

#ifdef VENDOR_EXT_SUPPORT
static int dhd_cfgvendor_priv_string_handler(struct wiphy *wiphy,
	struct wireless_dev *wdev, const void  *data, int len)
{
	const struct bcm_nlmsg_hdr *nlioc = data;
	struct net_device *ndev = NULL;
	struct bcm_cfg80211 *cfg;
	struct sk_buff *reply;
	void *buf = NULL, *cur;
	dhd_pub_t *dhd;
	dhd_ioctl_t ioc = { 0 };
	int ret = 0, ret_len, payload, msglen;
	int maxmsglen = PAGE_SIZE - 0x100;
	int8 index;

	WL_TRACE(("entry: cmd = %d\n", nlioc->cmd));

	cfg = wiphy_priv(wiphy);
	dhd = cfg->pub;

	DHD_OS_WAKE_LOCK(dhd);

	/* send to dongle only if we are not waiting for reload already */
	if (dhd->hang_was_sent) {
		WL_ERR(("HANG was sent up earlier\n"));
		DHD_OS_WAKE_LOCK_CTRL_TIMEOUT_ENABLE(dhd, DHD_EVENT_TIMEOUT_MS);
		DHD_OS_WAKE_UNLOCK(dhd);
		return OSL_ERROR(BCME_DONGLE_DOWN);
	}

	len -= sizeof(struct bcm_nlmsg_hdr);
	ret_len = nlioc->len;
	if (ret_len > 0 || len > 0) {
		if (len > DHD_IOCTL_MAXLEN) {
			WL_ERR(("oversize input buffer %d\n", len));
			len = DHD_IOCTL_MAXLEN;
		}
		if (ret_len > DHD_IOCTL_MAXLEN) {
			WL_ERR(("oversize return buffer %d\n", ret_len));
			ret_len = DHD_IOCTL_MAXLEN;
		}
		payload = max(ret_len, len) + 1;
		buf = vzalloc(payload);
		if (!buf) {
			DHD_OS_WAKE_UNLOCK(dhd);
			return -ENOMEM;
		}
		memcpy(buf, (void *)nlioc + nlioc->offset, len);
		*(char *)(buf + len) = '\0';
	}

	ndev = wdev_to_wlc_ndev(wdev, cfg);
	index = dhd_net2idx(dhd->info, ndev);
	if (index == DHD_BAD_IF) {
		WL_ERR(("Bad ifidx from wdev:%p\n", wdev));
		ret = BCME_ERROR;
		goto done;
	}

	ioc.cmd = nlioc->cmd;
	ioc.len = nlioc->len;
	ioc.set = nlioc->set;
	ioc.driver = nlioc->magic;
	ret = dhd_ioctl_process(dhd, index, &ioc, buf);
	if (ret) {
		WL_TRACE(("dhd_ioctl_process return err %d\n", ret));
		ret = OSL_ERROR(ret);
		goto done;
	}

	cur = buf;
	while (ret_len > 0) {
		msglen = nlioc->len > maxmsglen ? maxmsglen : ret_len;
		ret_len -= msglen;
		payload = msglen + sizeof(msglen);
		reply = cfg80211_vendor_cmd_alloc_reply_skb(wiphy, payload);
		if (!reply) {
			WL_ERR(("Failed to allocate reply msg\n"));
			ret = -ENOMEM;
			break;
		}

		if (nla_put(reply, BCM_NLATTR_DATA, msglen, cur) ||
			nla_put_u16(reply, BCM_NLATTR_LEN, msglen)) {
			kfree_skb(reply);
			ret = -ENOBUFS;
			break;
		}

		ret = cfg80211_vendor_cmd_reply(reply);
		if (ret) {
			WL_ERR(("testmode reply failed:%d\n", ret));
			break;
		}
		cur += msglen;
	}

done:
	vfree(buf);
	DHD_OS_WAKE_UNLOCK(dhd);
	return ret;
}

static inline bool
is_dfs(uint16 channel)
{
	if (channel >= 52 && channel <= 64)			/* class 2 */
		return TRUE;
	else if (channel >= 100 && channel <= 140)	/* class 4 */
		return TRUE;
	else
		return FALSE;
}

static int wl_cfgvendor_set_country(struct wiphy *wiphy,
	struct wireless_dev *wdev, const void  *data, int len)
{
	int err = BCME_ERROR, rem, type;
	char country_code[WLC_CNTRY_BUF_SZ] = {0};
	const struct nlattr *iter;

	nla_for_each_attr(iter, data, len, rem) {
		type = nla_type(iter);
		switch (type) {
			case ANDR_WIFI_ATTRIBUTE_COUNTRY:
				memcpy(country_code, nla_data(iter),
					MIN(nla_len(iter), WLC_CNTRY_BUF_SZ));
				break;
			default:
				WL_ERR(("Unknown type: %d\n", type));
				return err;
		}
	}

	err = wldev_set_country(wdev->netdev, country_code, true, true);
	if (err < 0) {
		WL_ERR(("Set country failed ret:%d\n", err));
	}

	return err;
}

static int
_dhd_get_channels(struct net_device *ndev, uint16 *d_chan_list,
	int *nchan, uint8 band, bool skip_dfs)
{
	int err = BCME_OK;
	int i, j;
	uint32 chan_buf[WL_NUMCHANNELS + 1];
	wl_uint32_list_t *list;
	if (*nchan) {
		WL_ERR(("d_chan_list is NULL"));
	}
	list = (wl_uint32_list_t *) (void *)chan_buf;
	list->count = htod32(WL_NUMCHANNELS);
	err = wldev_ioctl(ndev, WLC_GET_VALID_CHANNELS, chan_buf, sizeof(chan_buf), false);
	if (err < 0) {
		WL_ERR(("failed to get channel list (err: %d)\n", err));
		goto exit;
	}
	for (i = 0, j = 0; i < dtoh32(list->count) && i < *nchan; i++) {
		if (band == WLC_BAND_2G) {
			if (dtoh32(list->element[i]) > CHANNEL_2G_MAX)
				continue;
		} else if (band == WLC_BAND_5G) {
			if (dtoh32(list->element[i]) <= CHANNEL_2G_MAX)
				continue;
			if (skip_dfs && is_dfs(dtoh32(list->element[i])))
				continue;
		} else {
			if (skip_dfs && is_dfs(dtoh32(list->element[i])))
				continue;
		}
		d_chan_list[j++] = dtoh32(list->element[i]);
	}
	*nchan = j;
exit:
	return err;
}

void *
dhd_dev_get_gscan(struct net_device *dev, void *info, uint32 *len)
{
	void *ret = NULL;

	if (!len) {
		WL_ERR(("%s: len is NULL\n", __FUNCTION__));
		return NULL;
	}

	if (info) {
		uint16 ch_list[WL_NUMCHANNELS];
		uint32 *ptr, mem_needed, i;
		int32 err, nchan = WL_NUMCHANNELS;
		uint32 *gscan_band = (uint32 *) info;
		uint8 band = 0;

		if ((*gscan_band & GSCAN_BAND_MASK) == 0) {
			WL_ERR(("No band specified\n"));
			*len = 0;
			return ret;
		}
		if (*gscan_band & GSCAN_BG_BAND_MASK)
			band |= WLC_BAND_2G;
		if (*gscan_band & GSCAN_A_BAND_MASK)
			band |= WLC_BAND_5G;
			err = _dhd_get_channels(dev, ch_list, &nchan,
			                          (band & GSCAN_ABG_BAND_MASK),
			                          !(*gscan_band & GSCAN_DFS_MASK));
		if (err < 0) {
			WL_ERR(("%s: failed to get valid channel list\n", __FUNCTION__));
			*len = 0;
		} else {
			mem_needed = sizeof(uint32) * nchan;
			ptr = (uint32 *) kmalloc(mem_needed, GFP_KERNEL);
			if (!ptr) {
				WL_ERR(("%s: Unable to malloc %d bytes\n", __FUNCTION__, mem_needed));
				return ret;
			}
			for (i = 0; i < nchan; i++) {
				ptr[i] = wf_channel2mhz(ch_list[i],
				(ch_list[i] <= CH_MAX_2G_CHANNEL?
				WF_CHAN_FACTOR_2_4_G : WF_CHAN_FACTOR_5_G));
			}
			ret = ptr;
			*len = mem_needed;
		}
	} else {
		*len = 0;
		WL_ERR(("%s: info buffer is NULL\n", __FUNCTION__));
	}

	return ret;
}

static int wl_cfgvendor_get_channel_list(struct wiphy *wiphy,
	struct wireless_dev *wdev, const void  *data, int len)
{
	int err = 0, type, band;
	struct bcm_cfg80211 *cfg = wiphy_priv(wiphy);
	uint16 *reply = NULL;
	uint32 reply_len = 0, num_channels, mem_needed;
	struct sk_buff *skb;

	type = nla_type(data);
	if (type == GSCAN_ATTRIBUTE_BAND) {
		band = nla_get_u32(data);
	} else {
		return -1;
	}

	reply = dhd_dev_get_gscan(bcmcfg_to_prmry_ndev(cfg), &band, &reply_len);

	if (!reply) {
		WL_ERR(("Could not get channel list\n"));
		err = -EINVAL;
		return err;
	}
	num_channels =  reply_len/ sizeof(uint32);
	mem_needed = reply_len + VENDOR_REPLY_OVERHEAD + (ATTRIBUTE_U32_LEN * 2);

	/* Alloc the SKB for vendor_event */
	skb = cfg80211_vendor_cmd_alloc_reply_skb(wiphy, mem_needed);
	if (unlikely(!skb)) {
		WL_ERR(("skb alloc failed"));
		err = -ENOMEM;
		goto exit;
	}

	nla_put_u32(skb, GSCAN_ATTRIBUTE_NUM_CHANNELS, num_channels);
	nla_put(skb, GSCAN_ATTRIBUTE_CHANNEL_LIST, reply_len, reply);

	err =  cfg80211_vendor_cmd_reply(skb);

	if (unlikely(err))
		WL_ERR(("Vendor Command reply failed ret:%d \n", err));
exit:
	kfree(reply);
	return err;
}

const struct wiphy_vendor_command dhd_cfgvendor_cmds [] = {
	{
		{
			.vendor_id = OUI_BRCM,
			.subcmd = BRCM_VENDOR_SCMD_PRIV_STR
		},
		.flags = WIPHY_VENDOR_CMD_NEED_WDEV | WIPHY_VENDOR_CMD_NEED_NETDEV,
		.doit = dhd_cfgvendor_priv_string_handler
	},

	{
		{
			.vendor_id = OUI_GOOGLE,
			.subcmd = BRCM_VENDOR_SCMD_SET_COUNTRY
		},
		.flags = WIPHY_VENDOR_CMD_NEED_WDEV | WIPHY_VENDOR_CMD_NEED_NETDEV,
		.doit = wl_cfgvendor_set_country
	},

	{
		{
			.vendor_id = OUI_GOOGLE,
			.subcmd = BRCM_VENDOR_SCMD_GET_CHANNEL_LIST
		},
		.flags = WIPHY_VENDOR_CMD_NEED_WDEV | WIPHY_VENDOR_CMD_NEED_NETDEV,
		.doit = wl_cfgvendor_get_channel_list
	},
};

int cfgvendor_attach(struct wiphy *wiphy)
{
	wiphy->vendor_commands	= dhd_cfgvendor_cmds;
	wiphy->n_vendor_commands = ARRAY_SIZE(dhd_cfgvendor_cmds);

	return 0;
}

int cfgvendor_detach(struct wiphy *wiphy)
{
	wiphy->vendor_commands  = NULL;
	wiphy->n_vendor_commands = 0;

	return 0;
}
#endif /* VENDOR_EXT_SUPPORT */
