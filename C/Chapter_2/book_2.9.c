#include <stdio.h>
int is_odd(unsigned long n) {
    return n & 1;
}

int make_odd(int n) {
    return 1 | n;
}

int toggle_last_bit(int n){
    return 1 ^ n;
}

int multiply_by_8(int n) {
    n = n << 2;
    return n << 1;
}

int check_second_bit(int n) {
    int second_bit = n >> 1;
    return second_bit & 1;
}
int main () {
    int odd = check_second_bit(9);
    printf("%d", odd);
}