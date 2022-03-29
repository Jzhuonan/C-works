#include <stdio.h>

int main()
{
    char ch;
    int i;

    for (int i=0; i<=10; i++) {
        ch = getchar();
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        putchar(ch);
    }

    return 0;
}