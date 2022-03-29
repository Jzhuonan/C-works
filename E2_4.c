#include<stdio.h>

int main() 
{
    int num1, num2, res, correctRes;
    char opera;

    printf("Please enter your equation:\n");
    scanf("%d%c%d=%d", &num1, &opera, &num2, &res);
    printf("Your equation is: %d%c%d=%d\n", num1, opera, num2, res);

    if (opera == '+') {
        correctRes = num1 + num2;
    } else if (opera == '-') {
        correctRes = num1 - num2;
    } else {
        printf("Please enter correct equation\n");
    }
 
    if (correctRes == res) {
        printf("It's right!\n");
    } else {
        printf("It's not right!\n");
    }
    
    return 0;
}