#include <stdio.h>
int main()
{
    float p, salary = 500;
    printf("请输入工程利润p(元):");
    scanf("%f", &p);
    if (p > 1000 && p <= 2000)
        salary += p * 0.1;
    else if (p > 2000 && p <= 5000)
        salary += p * 0.15;
    else if (p > 5000 && p <= 10000)
        salary += p * 0.2;
    else if (p > 10000)
        salary += p * 0.25;
    printf("员工本月薪水:%.2f元\n", salary);
    return 0;
}