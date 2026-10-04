#ifndef NETGUARD_KERNEL_H
#define NETGUARD_KERNEL_H

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/errno.h>
#include <linux/netfilter.h>
#include <linux/netfilter_ipv4.h>
#include <linux/ip.h>
#include <linux/tcp.h>
#include <linux/udp.h>
#include <linux/icmp.h>
#include <linux/skbuff.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
#include <net/sock.h>
#include <net/netlink.h>
#include <net/net_namespace.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/rcupdate.h>
#include <linux/spinlock.h>
#include <linux/mutex.h>
#include <linux/atomic.h>
#include <linux/timekeeping.h>
#include <linux/ktime.h>
#include <linux/version.h>

#include "../../common/netguard_uapi.h"

#define MODULE_NAME "netguard_mod"

/* Global module parameters / configurations */
extern uint8_t netguard_default_policy;
extern uint8_t netguard_log_level;
extern uint64_t netguard_load_time_sec;

/* Helper to convert IPv4 u32 (network byte order) to string */
#define NIPQUAD(addr) \
    ((unsigned char *)&addr)[0], \
    ((unsigned char *)&addr)[1], \
    ((unsigned char *)&addr)[2], \
    ((unsigned char *)&addr)[3]

#endif /* NETGUARD_KERNEL_H */
