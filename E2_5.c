#include<stdio.h>

int main()
{
    int num1, num2;
    double res;
    char opera;

    printf("Please enter your equation, like 3*3\n");
    scanf("%d%c%d", &num1, &opera, &num2);

    switch (opera) {
        case '+': res = num1+num2; break;
        case '-': res = num1-num2; break;
        case '*': res = num1*num2; break;
        case '/': res = num1*1.0/num2; break;
        default: printf("Please enter correct equation\n");
    }
    printf("%d%c%d=%lF\n", num1, opera, num2, res);

    return 0;
}