#include <stdio.h>
int main()
{
    int digits[10];
    int letters = 0;
    int spaces = 0;
    for (int i = 0; i < 10; i++){
        digits[i] = 0;
    }
    int c;
    while ((c = getchar()) != EOF){  // Пока не конец ввода
        if (c >= '0' && c <= '9')
            ++digits[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++spaces;
        else 
            ++letters;
    }
    printf("digits =");
    for (int i = 0; i < 10; i++)
        printf(" %d", digits[i]);
    
    printf(", letters = %d, spaces = %d\n", letters, spaces);
    return 0;
}
