#include <stdio.h>

#define OUT 0
#define IN  1 

int main(int argc, char const *argv[])
{
    int c;
    int state = OUT;

    while ((c = getchar()) != EOF) 
    {
        if (c != ' ' && c != '\n' && c != '\t') {            
            putchar(c);
            state = IN;
        } else if (state == IN) {
            putchar('\n');
            state = OUT;
        }
    }
    
    return 0;
}
