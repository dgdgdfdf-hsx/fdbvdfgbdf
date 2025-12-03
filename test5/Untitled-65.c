#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], temp;
    int len, i, j;
    printf("输入字符串：");
    gets(a);
    len = strlen(a);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("逆转后：%s\n", a);
    return 0;
}