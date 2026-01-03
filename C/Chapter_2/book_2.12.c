#include <stdio.h>

int main() {
    int n = 2; // Число 2 — четное, мы ждем, что программа это подтвердит

    if ((n & 1) == 0) {
        printf("Число %d — четное\n", n);
    } else {
        printf("Число %d — НЕЧЕТНОЕ (как так?!)\n", n);
    }

    return 0;
}