#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c, ns;

    ns = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            ++ns;
        }
    }

    printf("%d\n", ns);
    return 0;
}
