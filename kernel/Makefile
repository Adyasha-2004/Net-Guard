obj-m += netguard_mod.o
netguard_mod-objs := netguard_main.o netfilter_hooks.o rule_engine.o netlink_comm.o stats.o proc_diag.o log.o

ccflags-y := -I$(src)/include -I$(src)/../common -Wall -Wextra -Wno-declaration-after-statement -Wno-unused-parameter

KDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	rm -f *.o *.ko *.mod.c *.mod .*.cmd modules.order Module.symvers
