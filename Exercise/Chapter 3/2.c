#include <stdio.h>
int main(void)
{
    int x;

    printf("Please enter an ASCII code:");
    scanf("%d", &x);

    printf("%d is the ASCII code for %c.", x, x);

    return 0;
}