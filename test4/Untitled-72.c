#include <stdio.h>
int main()
{
    int m, n, temp, gcd, lcm;
    printf("输入两个正整数：");
    scanf("%d%d", &m, &n);
    temp = m * n;
    while (n != 0)
    {
        gcd = m % n;
        m = n;
        n = gcd;
    }
    gcd = m;
    lcm = temp / gcd;
    printf("最大公约数：%d，最小公倍数：%d\n", gcd, lcm);
    return 0;
}