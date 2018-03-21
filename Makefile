
CC:=arm-linux-gnueabi-gcc

all:
	gcc host_machine/usb_host_bulk_test.c  -o host_machine/usb_host_bulk_test
	$(CC) -static target_machine/usb_device_bulk_test.c -o target_machine/usb_device_bulk_test

install:
	cp host_machine/usb_host_bulk_test ../output/pc/
	cp target_machine/usb_device_bulk_test ../output/

clean:
	rm -rf host_machine/usb_host_bulk_test target_machine/usb_device_bulk_test *.o
