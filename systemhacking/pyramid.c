#include <stdio.h>

int main()
{
        int n, i, j;
        printf("input number : ");
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
                for(j = i; j <= n/2; j++) {
                        printf(" ");
                }
                for(j = 0; j <= i*2; j++) {
                        printf("*");
                }
                printf("\n");
        }
        return 0;
}
