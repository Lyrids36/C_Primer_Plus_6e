#include <stdio.h>
int main(void)
{
    float inch;
    float cm;

    printf("Please enter your heigh(in inches)");
    scanf("%f", &inch);

    cm = inch * 2.54;
    printf("Your heigh(in cm) is %f", cm);

    return 0;
}