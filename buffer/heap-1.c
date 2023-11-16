// heap-1.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *input = malloc(40);
    char *hello = malloc(40);
    
    memset(input, 0, 40);
    memset(hello, 0, 40);
    
    strcpy(hello, "HI!");
    read(0, input, 100);
    
    printf("Input: %s\n", input);
    printf("hello: %s\n", hello);
}
