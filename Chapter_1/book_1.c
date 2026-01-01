/* #include <stdio.h>
int main()
{
    printf("Список покупок:\n");
    printf("\t- Молоко\n");
    printf("\t- Хлеб\n");
    printf("\t- \"Магазин у дома\"\n");
}
*/
/*
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
*/
/*
#include <stdio.h>
int main()  // Старый стиль, без int
{
    int c;              // ← Почему int, а не char?

    c = getchar();      // ШАГ 1: Читаем первый символ
    while (c != EOF) {  // ШАГ 2: Пока не конец файла
        putchar(c);     // ШАГ 3: Выводим символ
        c = getchar();  // ШАГ 4: Читаем следующий
    }
}
*/
/*
#include <stdio.h>
int main()
{
    long asym;
    asym = 0;
    while (getchar() != EOF)
        ++asym;
    printf("%ld\n", asym);
}
*/
/*
#include <stdio.h>
#define IN 1 
#define OUT 0 
int main ()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n' )
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        }
    printf ("%d %d %d\n", nl, nw, nc);
}
*/
/*
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
*/
/*
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
*/
/*
#include <stdio.h>
int factorial (int n);
int main ()
{
    int limit;
    printf("whats up what is the limit: ");
    scanf("%d", &limit);
    for (int i=1; i<=limit; i++)
    {
        printf("%d == %d ", i, factorial(i));
    }
}
int factorial(int n) {
    int res;
    if (n == 1)
        return 1;
    else
        for (int i=2; i<=n; i++)
            res = res * i;
        return res;

}
*/
/*
#include <stdio.h>

// 1. Прототип функции, которая ничего не возвращает
void try_to_change(int x);

int main() {
    int a = 10;

    printf("Main до вызова: %d\n", a);

    try_to_change(a); // Передаем копию

    printf("Main после вызова: %d\n", a);

    return 0;
}

// 2. Реализация функции
void try_to_change(int x) {
    x = x + 500; // Мучаем копию
    printf("Внутри функции: %d\n", x);
}
*/
/*
#include <stdio.h>
int my_strlen(char s[]);
void encrypt(char s[]);
int main() {
    char s[100];
    printf("Enter a text: ");
    scanf("%s", s);
    encrypt(s);
    printf("Encrypted text: %s\n", s);
    printf("Letter count: %d\n", my_strlen(s));
}
int my_strlen(char s[]) {
    int letter_count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        ++letter_count;
    }
    return letter_count;
}
void encrypt(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a')
            s[i] = '@';
        else if (s[i] == 'o')
            s[i] = '0';
    }
}
*/
#include <stdio.h>
int app(int size);
int close_app (int size);
int ram_available = 1024;
int apps_open = 0;
int main() {
    app(400);
    app(600);
    close_app(400);
    printf("ram_available = %d\n", ram_available);
    printf("how many apps are open= %d\n", apps_open);
    return 0;
}
int app(int size) {
    if (size > ram_available) {
        return 0;
    }
    else {
        apps_open = apps_open + 1;
        ram_available = ram_available - size;
        return 1;
    }
}
int close_app(int size) {
    if (apps_open > 0) {
        apps_open = apps_open - 1;
        ram_available = ram_available + size;
        return 1;
    } else {
        return 0;
    }
}