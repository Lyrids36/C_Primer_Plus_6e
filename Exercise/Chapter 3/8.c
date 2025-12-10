#include <stdio.h>
int main(void)
{
    float pint, cup, oz, ladle, teaspoon;

    printf("Please enter the number of cups:");
    scanf("%f", &cup);

    pint = cup / 2;
    oz = cup / 8;
    ladle = oz / 2;
    teaspoon = ladle / 3;

    printf("%f cups equivalent to %f pints,\nequivalent to %f ozes,\nequivalent to %f ladles,\nequivalent to % f teaspoons.\n ", cup, pint, oz, ladle, teaspoon);

    return 0;
}