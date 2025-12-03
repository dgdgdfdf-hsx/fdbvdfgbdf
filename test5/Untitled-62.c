// 起泡法
#include <stdio.h>
#define N 10
int main()
{
    int a[N], i, j, temp;
    printf("输入10个整数：");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("从大到小排列：");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>
#define N 10
int main()
{
    int a[N], i, j, k, temp;
    printf("输入10个整数：");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < N - 1; i++)
    {
        k = i;
        for (j = i + 1; j < N; j++)
            if (a[j] > a[k])
                k = j;
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
    printf("从大到小排列：");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}