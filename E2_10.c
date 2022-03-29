#include <stdio.h>

int main() 
{
    int num = 0;
    int rightDigit, sum = 0, intPart = 0;

    scanf("%d", &num);

    while (num>0) {
        rightDigit = num % 10;
        intPart = num / 10;
        sum += rightDigit;
        num = intPart;
    }

    printf("%d\n", sum);

    return 0;
}