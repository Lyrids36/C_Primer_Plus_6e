#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("int max = %d,int max + 1 = %d\n", INT_MAX, INT_MAX + 1);
    printf("long max = %ld,long max + 1 = %ld\n", LONG_MAX, LONG_MAX + 1);
    printf("float max = %e,float max * 10 = %e\n", FLT_MAX, FLT_MAX * 10);
    printf("float min = %e,float min / 10 =%e\n", FLT_MIN, FLT_MIN / 10);

    return 0;
}
