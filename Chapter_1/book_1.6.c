#include <stdio.h>
int main()
{
    int i = 0, multi = 0;
    int digits[5];
    while (i < 5){
        multi = multi + 10;
        digits[i] = multi;
        printf("nummbers[%d] = %d\n", i, digits[i]);
        ++i;
    }
    return 0;
}
