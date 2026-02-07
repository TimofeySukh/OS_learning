#include <stdio.h>
/*
int main() {
    int a = 10;
    int *p = &a;
    *p = 20;
    int b = *p;
    printf("%d", b);
}
*/
int main() {
    int gold = 100;
    int silver = 50;
    int *ptr;
    ptr = &gold;
    *ptr = *ptr * 2;
    ptr = &silver;
    *ptr = *ptr * 3;
    printf("%d, %d", gold, silver);
}