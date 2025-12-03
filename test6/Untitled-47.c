#include <stdio.h>
#include <string.h>
void countDuplicateChars(char str[])
{
    int count[256] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        count[(unsigned char)str[i]]++;
    }
    printf("重复字符及次数：\n");
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 1)
        {
            printf("%c: %d次\n", i, count[i]);
        }
    }
}
int main()
{
    char str[100];
    printf("请输入字符串：");
    gets(str);
    countDuplicateChars(str);
    return 0;
}