#include <stdio.h>
int main()
{
    int k = 100;
    while (k >= 1)
    {
        printf("%d,", k);
        k--;
        if ((100 - k) % 10 == 0)
            printf("\n");
    }
    return 0;
}