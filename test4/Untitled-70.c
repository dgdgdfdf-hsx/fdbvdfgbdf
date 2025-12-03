#include <stdio.h>
int main()
{
    int i, n;
    long long s = 1;
    printf("Please enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = s * i;
    printf("%d! = %lld\n", n, s);
    return 0;
}