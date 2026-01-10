#include <stdio.h>

int main() {
    int x = 10;

    if (x == 10) {
        goto jump;
    }

    printf("This will be skipped\n");

    jump:
        printf("Jumped directly here\n");

    return 0;
}