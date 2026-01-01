#include <stdio.h>
/*
#include <limits.h>

int main(){
    printf("Min char: %d\n Max char: %d\n", CHAR_MIN, CHAR_MAX);
    printf("Min int: %d\n Max int: %d\n", INT_MIN, INT_MAX);
    printf("Min short: %d\n Max short: %d\n", SHRT_MIN, SHRT_MAX);
    printf("Min long: %ld\n Max long: %ld\n", LONG_MIN, LONG_MAX);
    printf("Min long long: %lld\n Max long long: %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Unsigned char max: %u\n", UCHAR_MAX);
    printf("Unsigned int max: %u\n", UINT_MAX);
    printf("Unsigned short max: %u\n", USHRT_MAX);
    printf("Unsigned long max: %lu\n", ULONG_MAX);
    printf("Unsigned long long max: %llu\n", ULLONG_MAX);
    return 0;
}
*/
int main(){
    unsigned int u_int = -1;
    int s_int = u_int / 2; // if you do +1 output will be -2147483648 because of integer overflow
    printf("Unsigned int: %u\n", u_int);
    printf("Signed int: %d\n", s_int);
    unsigned char u_char = -1;
    char s_char = u_char / 2; // same here
    printf("Unsigned char: %u\n", u_char);
    printf("Signed char: %d\n", s_char);





    return 0;
}