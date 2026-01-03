#include <stdio.h>
int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main() {
    printf("Result 1: %c\n", lower('G'));
    printf("Result 2: %c\n", lower('m'));
    printf("Result 3: %c\n", lower('!'));
    return 0;
}