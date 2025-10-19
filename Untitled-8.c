#include <stdio.h>
int main (){
    int a,b,c,max;
    printf("5 6 7 :");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b) ? a : b;
    max=(max>c) ? max : c;
    printf("三个数中的最大值是：%d\n",max);
    return 0;
}