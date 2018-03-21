#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void usage(void)
{
	printf("usage: Usb host bulk transmission test process\n");
	printf("usb_host_bulk_test [iap | eap | eap_ext | lp0 | skel0] [read | write]\n\n");
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
		fd = open("/dev/usb_iap2", O_RDWR);
		dev = "IAP";
	} else if (strcmp(argv[1], "eap") == 0) {
		fd = open("/dev/usb_eap", O_RDWR);
		dev = "EAP";
	} else if (strcmp(argv[1], "eap_ext") == 0) {
		fd = open("/dev/usb_eap_ext", O_RDWR);
		dev = "EAP_EXT";
	} else if (strcmp(argv[1], "lp0") == 0) {
		fd = open("/dev/usb/lp0", O_RDWR);
		dev = "lp0";
	}else if (strcmp(argv[1], "skel0") == 0) {
		fd = open("/dev/skel0", O_RDWR);
		dev = "skel0";
	}else {
		usage();
		exit(EXIT_FAILURE);
	}

    if (fd < 0) {
        printf("open %s error. fd = %d, errno: %d\n", dev, fd, errno);
		exit(EXIT_FAILURE);
    }
	printf("open %s success. \n", dev);

	while(1) {
		if (strcmp(argv[2], "write") == 0) {
			sprintf(buf, "");
			ret = write(fd, "host send data: host --> device", count);
			if (ret < 0) {
				printf("write %s error. \n", dev);
				//exit(EXIT_FAILURE);
			}
			printf("%s: host send data: host --> device, num = %d\n", dev, num++);
			sleep(1);
		}else if (strcmp(argv[2], "read") == 0) {
			ret = read(fd, buf, count);
			if (ret < 0) {
				printf("read %s error. \n", dev);
				//exit(EXIT_FAILURE);
			}
			printf("%s: host receive data: [%s], num = %d\n", dev, buf, num++);
			sleep(1);
		} else {
			usage();
			exit(EXIT_FAILURE);
		}
	}
	
	return 0;
}
