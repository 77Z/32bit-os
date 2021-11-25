#include <drivers/serial.h>
#include <libc/string.h>

char tree[256][256] = {
	"/dev",
	"/dev/kb0",
	"/home",
	"/proc"
};

int item = 3; // Number of default items - 1

int initFS(int bootdrive) {
	
	char driveint[32];
	int_to_ascii(bootdrive, driveint);
	printserial("Boot Drive: ");
	printserial(driveint);
	printserial("\n");



}

void create_directory(char* fullpath) {
	item++;
	//tree[item][1] = fullpath;

}