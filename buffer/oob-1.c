// 2023-11-23

#include<stdio.h>

int main(void) {
  int win;
  int idx;
  int buf[10];

  printf("Which index? ");
  scanf("%d", &idx);

  printf("Value: ");
  scanf("%d", &buf[idx]);
  
  printf("idx: %d, value: %d\n", idx, buf[idx]);

  if (win == 31337) {
    printf("Theori{-----------redacted---------}\n");
  }
}
