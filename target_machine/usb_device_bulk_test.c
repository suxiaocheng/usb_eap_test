#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void usage(void)
{
	printf("usage: Usb device bulk transmission test process\n");
	printf("usb_device_bulk_test [iap | eap | lp0] [read | write]\n\n");
}

int main(int argc, char* argv[])
{
	int fd, ret, count = 50, num = 1;
	char buf[50];
	char *dev;

	if (argc == 1 || strcmp(argv[1], "-h") == 0 ||
	    strcmp(argv[1], "--help") == 0 || argc != 3) {
		usage();
		exit(EXIT_FAILURE);
	}

	if (strcmp(argv[1], "iap") == 0) {
		fd = open("/dev/bulk_iap", O_RDWR);
		dev = "IAP";
	} else if (strcmp(argv[1], "eap") == 0) {
		fd = open("/dev/bulk_eap", O_RDWR);
		dev = "EAP";
	} else if (strcmp(argv[1], "eap_ext") == 0) {
		fd = open("/dev/bulk_eap_ext", O_RDWR);
		dev = "EAP_EXT";
	} else if (strcmp(argv[1], "lp0") == 0) {
		fd = open("/dev/g_printer0", O_RDWR);
		dev = "lp0";
	}else {
		usage();
		exit(EXIT_FAILURE);
	}

    if (fd < 0) {
        printf("open %s error. \n", dev);
		return -1;
    }
	printf("open %s success. \n", dev);

	while(1) {
		if (strcmp(argv[2], "write") == 0) {
			ret = write(fd, "device send data: device --> host", count);
			if (ret < 0) {
				printf("write %s error. \n", dev);
				exit(EXIT_FAILURE);
			}
			printf("%s: device send data: device --> host, num = %d\n", dev, num++);
			sleep(1);
		}else if (strcmp(argv[2], "read") == 0) {
			ret = read(fd, buf, count);
			if (ret < 0) {
				printf("read %s error. \n", dev);
				exit(EXIT_FAILURE);
			}
			printf("%s: device receive data: [%s], num = %d\n", dev, buf, num++);
			sleep(1);
		} else {
			usage();
			exit(EXIT_FAILURE);
		}
	}
}
