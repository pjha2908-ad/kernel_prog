PWD := $(shell pwd)
KDIR := /lib/modules/$(shell uname -r)/build
ccflags-y := -DDEBUG
obj-m := kfifo_static_single.o

all:
	make -C $(KDIR) M=$(PWD) modules
install:
	make -C $(KDIR) M=$(PWD) modules_install
clean:
	make -C $(KDIR) M=$(PWD) clean
