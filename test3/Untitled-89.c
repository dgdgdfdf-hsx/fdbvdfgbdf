#include <stdio.h>
int main()
{
    int num, temp, digit, count = 0;
    printf("请输入一个不多于5位的正整数:");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    printf("该数是%d位数\n", count);
    temp = num;
    printf("各位数字:");
    for (int i = count - 1; i >= 0; i--)
    {
        digit = temp / (int)pow(10, i);
        printf("%d ", digit);
        temp %= (int)pow(10, i);
    }
    printf("\n逆序打印:");
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        printf("%d", digit);
        temp /= 10;
    }
    printf("\n");
    return 0;
}