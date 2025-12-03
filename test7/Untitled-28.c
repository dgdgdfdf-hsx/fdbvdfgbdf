#include <stdio.h>
#include <string.h>
void replace_foo(char *str)
{
    char *p = str;
    while (*p != '\0')
    {
        if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
        {
            *p = 'x';
            *(p + 1) = 'x';
            *(p + 2) = 'x';
            p += 3;
        }
        else
            p++;
    }
}
int main()
{
    char str[100];
    printf("请输入字符串:");
    gets(str);
    replace_foo(str);
    printf("替换后的字符串:%s\n", str);
    return 0;
}