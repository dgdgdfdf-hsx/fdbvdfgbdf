#include <stdio.h>
int main()
{
    int sex, weight, cubage;
    printf("请输入输血者性别(男:非负数,女:负数)和体重(公斤):");
    scanf("%d,%d", &sex, &weight);
    if (sex >= 0)
        cubage = (weight >= 120) ? 200 : 180;
    else
        cubage = (weight >= 100) ? 150 : 120;
    printf("输血量为:%d毫升\n", cubage);
    return 0;
}