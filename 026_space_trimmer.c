#include <stdio.h>
#define MAX_LINE 1000

int get_line(char s[], int lim);
void copy(char to[], char from[], int length);

int main() {
    int length;
    char line[MAX_LINE];
    char output[MAX_LINE];

    while ((length = get_line(line, MAX_LINE)) > 0) {
        for (int i = length-1; i > 0; --i) {
            if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n') {
                copy(output, line, i+1);
                printf("%s\n", output);
                break;
            }
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

void copy(char to[], char from[], int length) {
    int i;
    for (i = 0; i < length && from[i] != '\0'; ++i) {
        to[i] = from[i];
    }
    to[i] = '\0';
}