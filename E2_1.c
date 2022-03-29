#include<stdio.h>

int main()
{
    short int x, y;
    float average;
    // scanf 接收参数类型错误
    scanf("%hd %hd", &x, &y);
    printf("x = %d, y = %d \n", x, y);
    // average is float
    average = (x+y)/2.0;
    printf("average = %f\n", average);

    return 0;
}