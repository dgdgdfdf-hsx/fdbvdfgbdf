#include <stdio.h>
int main()
{
    int day = 10, count = 1;
    while (day > 1)
    {
        count = (count + 1) * 2;
        day--;
    }
    printf("妈妈总共买了%d块巧克力\n", count);
    return 0;
}