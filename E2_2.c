#include <stdio.h>
#define PI 3.1415926

int main()
{
    double radius, perimeter, area;
    printf("Please input the radius of the Circle: \n");
    scanf("%lF", &radius);
    // perimeter
    perimeter = 2* PI * radius;
    printf("Perimeter = %F\n", perimeter);
    // area;
    area = PI * radius * radius;
    printf("Area = %F\n", area);

    return 0;
}