#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, i, j, wl, mc, ml;
    int wls[100];

    wl = 0;

    for (i = 0; i < 100; ++i) {
        wls[i] = 0;
    }

    while ((c = getchar()) != '1') {
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ) {
            ++wl;
        } else if (wl != 0) {
            ++wls[wl-1];
            wl = 0;
        }        
    }

    mc = wls[0];
    for (i = 1; i < 100; ++i) {
        if (mc < wls[i]) {
            mc = wls[i];
        }
    }

    for (i = mc; i > 0; --i) {
        for (j = 0; j < 100; ++j) {
            if (wls[j] >= i) {
                printf("%4c", '*');
            } else if (wls[j] != 0) {
                printf("%4c", ' ');
            }
        }
        putchar('\n');
    }
    for (i = 0; i < 100; ++i) {
        if (wls[i] != 0) {
            printf("%4d", i+1);
        }
    }
    putchar('\n');

    return 0;
}
