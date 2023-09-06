#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    int p;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || p != ' ') {
            putchar(c);
        } 

        p = c;
    }
    return 0;
}
