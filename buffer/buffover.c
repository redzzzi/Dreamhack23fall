// 버퍼 오버플로우에 취약한 함수가 포함된 가장 기본적인 예제 코드

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
  char buffer[10];
  strcpy(buffer, argv[1]);
  printf("%s\n", &buffer);
}
