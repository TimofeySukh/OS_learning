#include <stdio.h>
int main()
{
    long asym;
    asym = 0;
    while (getchar() != EOF)
        ++asym;
    printf("%ld\n", asym);
}
