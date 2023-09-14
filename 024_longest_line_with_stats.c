#include <stdio.h>
#define MAX_LINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAX_LINE];
    char longest[MAX_LINE];
    int c;

    max = 0;
    while((len = get_line(line, MAX_LINE)) > 0) {
        if (line[len - 1] != '\n') {
            while ((c = getchar()) != EOF && c != '\n') {
                ++len;
            }
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max < MAX_LINE) {
        --max;
    }
    if (max > 0) {
         printf("longest line: %s", longest);
         printf("longest length: %d", max);
    }

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

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}