
KERN_DIR = /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KERN_DIR) M=$(shell pwd) modules

clean:
	rm -rf modules.order *.o *.mod.c *.ko Module.symvers

obj-m := usb_eap.o
