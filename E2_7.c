#include<stdio.h>

int main()
{
    int n, powOfn, right;

    for (int i=0; i<=100; i++) {
        n = i;
        powOfn = n*n;
        printf("PowOf %d is %d\t,", n,powOfn);
        if (i<10) {
            right = powOfn % 10;    
        }
        if (i>=10) {
            right = powOfn % 100;
        }
        printf("right is %d\t", right);
        if (n == right) {
            printf("%d 是同构数\n", n);
        } else {
            printf("%d 不是同构数\n", n);
        }
    }

    return 0;
}