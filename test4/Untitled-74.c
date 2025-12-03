#include <stdio.h>
int main()
{
    double rich_get = 0.0, rich_give = 0.01;
    int day;
    for (day = 1; day <= 30; day++)
    {
        rich_get += 100000.0;
        if (day > 1)
            rich_give *= 2;
    }
    printf("陌生人给百万富翁：%.2f元\n", rich_get);
    printf("百万富翁给陌生人：%.2f元\n", rich_give);
    return 0;
}