PWD := $(shell pwd)
KDIR := /lib/modules/$(shell uname -r)/build
ccflags-y += -DDEBUG
obj-m := core_module/core_module.o
obj-m += user_module/user_module.o

all:
	make -C $(KDIR) M=$(PWD) modules
install:
	make -C $(KDIR) M=$(PWD) modules_install
clean:
	make -C $(KDIR) M=$(PWD) clean
