#ifndef NETGUARD_STATS_H
#define NETGUARD_STATS_H

#include "netguard_kernel.h"

void netguard_stats_init(void);
void netguard_stats_reset(void);
void netguard_stats_get(struct netguard_stats *out_stats);
void netguard_stats_inc_packet(uint8_t proto, uint8_t direction, uint8_t action, uint32_t len);

#endif /* NETGUARD_STATS_H */
