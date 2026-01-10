#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* reverse: переворачивает строку s (результат в s) */
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
void itob(int n, char s[], int b) {
    int sign = 0;
    if (n < 0 )
        sign = 1;
    int i = 0;
    char symbols[] = "0123456789abcdef";
    do {
        s[i++] = symbols[abs(n % b)];
        n /= b;
    } while (n != 0);
    if (sign == 1)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
int main() {
    char s[100];
    itob(-123, s, 16);
    printf("%s\n", s);
}
