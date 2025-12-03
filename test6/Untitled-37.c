#include <stdio.h>
double fun(double x, int y)
{
    int i;
    double z;
    for (i = 1, z = x; i < y; i++)
        z = z * x;
    return z;
}
int main()
{
    double base;
    int exp;
    printf("请输入底数和指数（整数）：");
    scanf("%lf%d", &base, &exp);
    printf("结果为：%.2lf\n", fun(base, exp));
    return 0;
}