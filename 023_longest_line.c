#include <stdio.h>

#define MAX_LINE 1000

void copy(char to[], const char from[]);

int get_line(char s[], int lim);

int main(int argc, char const *argv[])
{
    int len;
    int max;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    max = 0;
    while((len = get_line(line, MAX_LINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }        
    }

    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != '1' && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


void copy(char to[], const char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}