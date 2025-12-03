#include <stdio.h>
int main()
{
    float frac1 = 1.0 / 2, frac2 = 1.0 / 3, frac3 = 1.0 / 4;
    float sum；
    sum = frac1 + frac2 + frac3;
    printf("1/2 + 1/3 + 1/4 = %.6f\n", sum);
    printf("计算过程：0.5 + 0.333333 + 0.25 = %.6f\n", sum);

    return 0;
}
