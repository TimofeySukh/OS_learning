#include <ctype.h>
#include <stdio.h>
int getch (void);
void ungetch (int);
/* getint: читает следующее целое из ввода в *pn */
int getint(int *pn)
{
    int c, sign, last_c;
    while (isspace(c = getch()))
        ; /* пропуск символов-разделителей */
    if (!isdigit(c) && c != EOF && c != '+' && c != '-' ) {
        ungetch (c); /* не число */
        return 0;
    }
    sign = (c == '-' ) ? -1 : 1;
    if (c == '+' || c == '-') {
        last_c = c;
        c = getch();
        if (!isdigit(c) && c != EOF) {
            ungetch(c);
            ungetch(last_c);
            return 0;
        }
    }
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0' ) ;
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}

#define BUFSIZE 100
char buf[BUFSIZE]; /* буфер для ungetch */
int bufp = 0; /* след, свободная позиция в буфере */
int getch(void) /* взять (возможно возвращенный) символ */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int с) /* вернуть символ на ввод */
{
    if (bufp >= BUFSIZE)
        printf ("ungetch: слишком много символов\n");
    else
        buf[bufp++] = с;
}
int main() {
    int value = 0; // Наш сундук, куда getint положит число
    int status;

    printf("Введите число: ");
    status = getint(&value);

    if (status > 0)
        printf("Успех! Число = %d\n", value);
    else if (status == 0)
        printf("Ошибка: это не число.\n");
    else
        printf("Конец файла (EOF).\n");

    return 0;
}