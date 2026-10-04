#ifndef NETGUARD_NETFILTER_HOOKS_H
#define NETGUARD_NETFILTER_HOOKS_H

#include "netguard_kernel.h"

int  netguard_netfilter_init(void);
void netguard_netfilter_cleanup(void);
uint8_t netguard_get_hooks_active(void);

#endif /* NETGUARD_NETFILTER_HOOKS_H */
