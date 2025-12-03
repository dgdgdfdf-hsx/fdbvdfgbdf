#include <stdio.h>
void main()
{
    int sex, weight, cubage;
    printf("请给出输血者的性别和体重:");
    scanf("%d,%d", &sex, &weight);
    if (sex >= 0)
    {
        if (weight >= 120)
            cubage = 200;
        else
            cubage = 180;
        printf("此人应该输血:%d 毫升\n", cubage);
    }
    else
    {
        if (weight >= 100)
            cubage = 150;
        else
            cubage = 120;
        printf("此人应该输血:%d 毫升\n", cubage);
    }
}