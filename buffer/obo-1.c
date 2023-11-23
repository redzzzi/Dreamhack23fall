// 2023-11-23

#include<stdio.h>
#include <unistd.h>

void cpybuf(char *buf, int sz) {
  char temp[16];

  for (int i=0; i<=sz; i++) {
    temp[i] = buf[i];
  }
}

int main(void) {
  char buf[16];

  read(0, buf, 16);
  cpybuf(buf, sizeof(buf));
}
