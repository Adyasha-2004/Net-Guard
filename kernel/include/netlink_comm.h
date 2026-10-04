#ifndef NETGUARD_NETLINK_COMM_H
#define NETGUARD_NETLINK_COMM_H

#include "netguard_kernel.h"

int  netguard_netlink_init(void);
void netguard_netlink_cleanup(void);
void netguard_netlink_broadcast_event(const struct netguard_packet_event *event);

#endif /* NETGUARD_NETLINK_COMM_H */
