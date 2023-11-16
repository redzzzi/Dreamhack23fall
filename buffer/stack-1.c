// stack-1.c

#include<stdio.h>
#include<stdlib.h>

int main(void) {
  char buf[16];
  gets(buf);

  printf("%s\n", buf);
}
