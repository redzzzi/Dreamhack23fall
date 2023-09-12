// Name: opt.c
// Compile: gcc -o opt opt.c -O2
#include <stdio.h>
int main() {
  int x = 0;
  for (int i = 0; i < 100; i++) x += i; // x에 0부터 99까지의 값 더하기
  printf("%d\n", x);
}
