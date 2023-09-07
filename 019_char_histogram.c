#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
    int h[CHAR_MAX];
    int i, j, c, mc;

    for (i = 0; i < CHAR_MAX; ++i) {
        h[i] = 0;
    }

    while ((c = getchar()) != '1') {
        ++h[c];
    }

    mc = h[0];
    for (i = 1; i < CHAR_MAX; ++i) {
        if (mc < h[i])
        {
            mc = h[i];
        }
    }

    for (i = mc; i > 0; --i) {
        for (j = 0; j < CHAR_MAX; ++j) {
            if (h[j] >= i) {
                printf("%5c", '_');
            } else if (h[j] != 0) {
                printf("%5c", ' ');
            }
        }
        putchar('\n');
    }
    for (i = 0; i < CHAR_MAX; ++i) {
        if (h[i] != 0) {
            if (h[i] == '\t') {              
                printf("%5s", "\\t");
            } else if (h[i] == '\b') {
                printf("%5s", "\\b");
            } else if (h[i] == '\\') {
                printf("%5s", "\\");
            } else if (h[i] == '\n') {
                printf("%5s", "\\n");
            } else {
                printf("%5c", i);
            }
        }
    }
    putchar('\n');

    return 0;
}
