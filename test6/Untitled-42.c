#include <stdio.h>
void findNumbers()
{
    for (int num = 10; num <= 99; num++)
    {
        if (num % 3 == 0 && (num / 10 == 5 || num % 10 == 5))
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main()
{
    printf("能被3整除且至少一位是5的两位数：");
    findNumbers();
    return 0;
}