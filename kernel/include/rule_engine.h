#ifndef NETGUARD_RULE_ENGINE_H
#define NETGUARD_RULE_ENGINE_H

#include "netguard_kernel.h"

struct netguard_rule_node {
    struct netguard_rule rule;
    atomic64_t           packet_count;
    atomic64_t           byte_count;
    atomic64_t           last_matched;
    struct list_head     list;
    struct rcu_head      rcu;
};

int  netguard_rule_engine_init(void);
void netguard_rule_engine_cleanup(void);

int  netguard_rule_add(const struct netguard_rule *rule);
int  netguard_rule_del(uint32_t rule_id);
int  netguard_rule_update(const struct netguard_rule *rule);
int  netguard_rule_set_enabled(uint32_t rule_id, uint8_t enabled);
int  netguard_rule_clear(void);
int  netguard_rule_dump(struct netguard_rule *out_rules, uint32_t max_count, uint32_t *out_count);
uint32_t netguard_rule_count(void);

uint8_t netguard_rule_evaluate(uint32_t src_ip, uint32_t dst_ip,
                              uint16_t src_port, uint16_t dst_port,
                              uint8_t protocol, uint8_t direction,
                              uint8_t tcp_flags, uint32_t pkt_len,
                              uint32_t *out_rule_id);

#endif /* NETGUARD_RULE_ENGINE_H */
