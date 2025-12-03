#include <stdio.h>
int main()
{
    float total = 100.0, height = 100.0;
    int n;
    for (n = 2; n <= 10; n++)
    {
        height /= 2;
        total += 2 * height;
    }
    printf("第10次落地时共经过：%.2f米\n", total);
    printf("第10次反弹高度：%.2f米\n", height / 2);
    return 0;
}