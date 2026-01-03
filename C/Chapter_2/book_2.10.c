#include <stdio.h>
int bitcount(unsigned int x) {
    int count = 0;
    while (x != 0) {
        x &= (x - 1);
        count++;
    }
    return count;
}
int main () {
    int x = bitcount(123);
    printf("%d", x);
}