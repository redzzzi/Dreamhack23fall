// stack-4.c
#include <stdio.h>

int main(void) {
	char buf[32] = {0, };
	read(0, buf, 31);
	sprintf(buf, "Your Input is: %s\n", buf);
	puts(buf);
}
