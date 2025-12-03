#include <stdio.h>
int main()
{
    char c;
    int letters = 0, space = 0, digit = 0, other = 0;
    printf("输入一行字符：");
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c == ' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            other++;
    }
    printf("英文字母：%d，空格：%d，数字：%d，其他字符：%d\n", letters, space, digit, other);
    return 0;
}