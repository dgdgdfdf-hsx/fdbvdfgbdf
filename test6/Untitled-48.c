#include <stdio.h>
int *find_middle(int a[], int n)
{
    return &a[(n - 1) / 2];
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4, 5};
    printf("数组1中间元素：%d\n", *find_middle(arr1, 4));
    printf("数组2中间元素：%d\n", *find_middle(arr2, 5));
    return 0;
}