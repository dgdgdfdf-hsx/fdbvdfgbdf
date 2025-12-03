#include <stdio.h>
#include <math.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}
void goldbach(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            printf("%d = %d + %d\n", n, i, n - i);
            return;
        }
    }
    printf("未找到符合条件的素数对\n");
}
int main()
{
    int even;
    printf("输入一个充分大的偶数：");
    scanf("%d", &even);
    if (even % 2 != 0)
    {
        printf("请输入偶数！\n");
        return 1;
    }
    goldbach(even);
    return 0;
}