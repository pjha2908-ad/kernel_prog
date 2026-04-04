PWD := $(shell pwd)
KDIR := /lib/modules/$(shell uname -r)/build
ccflags-y += -DDEBUG
obj-m += libtest.o 
libtest-y := mylib.o myCaller.o

all:
	make -C $(KDIR) M=$(PWD) modules
install:
	make -C $(KDIR) M=$(PWD) modules_install
clean:
	make -C $(KDIR) M=$(PWD) clean
