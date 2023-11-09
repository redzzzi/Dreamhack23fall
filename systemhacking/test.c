#include <stdio.h>

int func(int a, int b)
{
  int x = a;
  int y = b;

  return x + y;
}

int main()
{
  int a = 2;
  int b = 3;

  int c = func(a, b);

  return 0;
}
