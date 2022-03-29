#include<stdio.h>

int main()
{
    double x, y;
    printf("Please enter the value of X\n");
    scanf("%lF", &x);

    if (x < 0) {
        y = 0;
    } else if (x>=0 && x<10) {
        y = x;
    } else if (x>=10 && x<20) {
        y = 10;
    } else if (x>=20 && x<40) {
        y = (-0.5)*x + 20;
    } else {
        printf("Your value is out the limit!\n");
    }

    printf("Y = %lF", y);

    return 0;
}
