#include <stdio.h>
#include <stdbool.h>
bool search(int a[], int n, int key)
{
    int *p = a;
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) == key)
            return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int key;
    printf("请输入搜索键:");
    scanf("%d", &key);
    if (search(arr, 5, key))
        printf("找到该元素\n");
    else
        printf("未找到该元素\n");
    return 0;
}