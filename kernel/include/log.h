#ifndef NETGUARD_LOG_H
#define NETGUARD_LOG_H

#include "netguard_kernel.h"

void netguard_log_init(void);
void netguard_log_cleanup(void);
void netguard_log_event(const struct netguard_packet_event *event);
int netguard_log_get_events(struct netguard_packet_event *buf, uint32_t max_count, uint32_t *out_count);

#endif /* NETGUARD_LOG_H */
