#include <stdio.h>

int strend(char *s, char *t) {
    if (*t == '\0')
        return 1;
    char *bs = s;
    char *bt = t;
    while (*s != '\0') {
        s++;
    }
    while (*t != '\0') {
        t++;
    }
    if ((s - bs) < (t - bt))
        return 0;
    s--; t--;
    while (*s == *t) {
        if (t == bt) {
            return 1;
        }
        s--; t--;
    }
    return 0;
}
int main() {
    char a[10] = "abcdefgh";
    char b[10] = "fgh";
    int r = strend(a, b);=
    printf("%d", r);
}