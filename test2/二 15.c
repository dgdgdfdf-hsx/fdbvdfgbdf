#include <stdio.h>
#define PI 3.1415926  

int main()
{
    float radius = 5.0;
    float circumference, area;
    circumference = 2 * PI * radius;
    area = PI * radius * radius；
    printf("圆的半径 = %.1f\n", radius);
    printf("圆的周长 = %.3f\n", circumference);
    printf("圆的面积 = %.3f\n", area);

    return 0;
}
