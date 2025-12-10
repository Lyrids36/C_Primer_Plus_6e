#include <stdio.h>
int main(void)
{
    int age;
    float seconds;

    printf("Enter your age:");
    scanf("%d", &age);

    seconds = age * 3.156e7;
    printf("Your age is equivalent to %e seconds.", seconds);

    return 0;
}