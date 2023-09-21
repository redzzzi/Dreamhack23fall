#include<stdio.h>

int main() {
  int n = 0;
  int rv = scanf("%d", &n);

  if (rv == 1) {
    printf("%d\n", n+1);
  } else {
    printf("NaN\n");
  }

  return 0;
}
