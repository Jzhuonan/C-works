#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int randNum, guessNum;
    // scanf("%d", &guessNum);
    srand(time(NULL));
    // for (int i=0;i<10;i++) {
    //     randNum = rand() % 10 + 1;
    //     printf("%d\n", randNum);
    // }
    randNum = rand() % 10 + 1;
    

    return 0; 
}