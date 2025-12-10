#include <stdio.h>
int main(void)
{
    float quarts;
    float molecules;

    printf("Please enter the number of quarts of water:");
    scanf("%f", &quarts);

    molecules = (quarts * 950) / 3.0e-23;
    printf("%f quarts of water contain %e molecules.\n", quarts, molecules);

    return 0;
}