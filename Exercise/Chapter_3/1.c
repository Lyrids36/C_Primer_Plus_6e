#include <stdio.h>
int main(void)
{
    int int_max = 32767;
    int int_max_1 = 32768;

    long int long_max = 2147483647;
    long int long_max_1 = 2147483648;

    float float_max = 3.4e38f;
    float float_max_1 = 3.4e38f * 100.0f;

    float float_min = 0.1234E-38;
    float float_min_1 = 0.1234E-38 / 10;

    printf("int max = %d,int max + 1 = %d\n", int_max, int_max_1);
    printf("long max = %ld,long max + 1 = %ld\n", long_max, long_max_1);
    printf("float max = %e,float max + 1 = %e\n", float_max, float_max_1);
    printf("float min = %e,float min - 1 =%e\n", float_min, float_min_1);

    return 0;
}
