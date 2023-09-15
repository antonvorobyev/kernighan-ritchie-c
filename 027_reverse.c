#include <stdio.h>
#define MAX_LINE 1000

int get_line(char s[], int lim);
void reverse(char origin[], char reversed[]);

int main() {
    int length;
    char line[MAX_LINE];
    char output[MAX_LINE];

    while ((length = get_line(line, MAX_LINE)) > 0) {
        reverse(line, output);
        printf("%s", output);
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

int length_string(char string[]) {
    int length = 0;
    while (length < MAX_LINE && string[length] != '\0') {
        ++length;
    }
    return length;
}

void reverse(char origin[], char reversed[]) {
    int length = length_string(origin);

    for (int i = length-1; i >= 0; --i) {
        reversed[length-i-1] = origin[i];
    }
    reversed[length] = '\0';
}