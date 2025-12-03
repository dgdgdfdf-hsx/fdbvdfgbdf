#include <stdio.h>
#include <string.h>
typedef bool (StrCmpFunc)(char *, char *);
bool compare(char *s1, char *s2)
{
    return strcmp(s1, s2) == 0;
}
int main()
{
    char str1[100], str2[100];
    StrCmpFunc func = compare;
    printf("请输入第一行字符串:");
    gets(str1);
    printf("请输入第二行字符串:");
    gets(str2);
    if (func(str1, str2))
        printf("两行字符串一致\n");
    else
        printf("两行字符串不一致\n");
    return 0;
}