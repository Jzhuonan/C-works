#include <stdio.h>

int main() 
{
    int flag = 1;
    for (int i=1; i<10; i++) {
        for (int j=flag; j<10; j++) {
            printf("%d*%d=%d\t", i, j, i*j);
        }
        printf("\n");
        flag++;
    }

    return 0;
}