#include <stdio.h>
int main(void)
{
    int year;

    printf("Enter your age:");
    scanf("%d", &year);

    printf("Your age in days is:%d ", year * 365);

    return 0;
}