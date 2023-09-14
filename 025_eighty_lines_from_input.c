#include <stdio.h>
#define MAX_LINE 1000

int get_line(char s[], int lim);

int main() {
    int len = 0;
    char line[MAX_LINE];

    while((len = get_line(line, MAX_LINE)) > 0) {
        if (len - 1 > 80) {
            printf("%s", line);
        }
    }
    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
