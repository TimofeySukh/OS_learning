#include <stdio.h>
#define swap(t, x, y) { t temp; temp = x; x = y; y = temp; }

int main() {
    int a = 10;
    int b = 20;
    swap(int,a,b)
    printf("%d, %d", a, b);
}