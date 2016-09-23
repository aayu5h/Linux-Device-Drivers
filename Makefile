
KDIR := /lib64/modules/$(shell uname -r)/build
PWD := $(shell pwd)

obj-m := ofd.o

default:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
