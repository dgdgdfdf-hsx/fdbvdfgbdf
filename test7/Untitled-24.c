#include <stdio.h>
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int num, *p = arr, found = 0;
    printf("请输入要查找的数:");
    scanf("%d", &num);
    for (int i = 0; i < 15; i++)
    {
        if (*(p + i) == num)
        {
            printf("找到该数，位置为第%d个\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No Found\n");
    return 0;
}