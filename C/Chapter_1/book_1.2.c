#include <stdio.h>
int main()
{
    float num, x, result;
    x = 3.2;
    for(num = 1.1; num <= 32767; num = num + 1){
        num = num + 1;
        result = num * x;
        printf("Таблица:\n");
        printf("\t%f * %f = %f \n", num, x, result);
    }

}
