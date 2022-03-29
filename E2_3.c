#include <stdio.h>
#include <math.h>

int main ()
{
    double deposit, capital;
    int years;
    double const RATE = 0.0295;
    printf("Please enter your capital: \n");
    scanf("%lF", &capital);
    printf("Please enter the numbers of years you want to save: \n");
    scanf("%d", &years);
    // get the deposite
    deposit = capital * pow(1+RATE, years);
    printf("Your will get %lF after %d years\n", deposit, years);

    return 0;
}