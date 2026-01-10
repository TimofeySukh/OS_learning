#include <ctype.h>
/* atof: преобразование строки s в double */
double atof (char s[])
{
    double val, power;
    int i, sign;
    int esign, exp = 0;
    for (i = 0; isspace (s[i]); i++)
        ;
        sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit (s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] =='.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
        if (s[i] == '+') {
            esign = 1;
            i++;
        } else if (s[i] == '-') {
            esign = -1;
            i++;
        } else {
            esign = 1;
        }
        for (exp = 0; isdigit(s[i]); i++)
            exp = 10 * exp + (s[i] - '0');

    }
    double result = sign * val / power;

    for ( ; exp > 0; exp--) {
        if (esign > 0)
            result *= 10.0;
        else
            result /= 10.0;
    }
    return result;

}
#include <stdio.h>

// Объявляем твою функцию, чтобы main её видел
double atof(char s[]);

int main() {
    char s1[] = "123.45e+6";
    char s2[] = "123.45E-3";
    char s3[] = "1.5e2";
    char s4[] = "-0.5e-1";

    printf("String: %s  ->  Result: %f\n", s1, atof(s1));
    printf("String: %s  ->  Result: %f\n", s2, atof(s2));
    printf("String: %s  ->  Result: %f\n", s3, atof(s3));
    printf("String: %s  ->  Result: %f\n", s4, atof(s4));

    return 0;
}