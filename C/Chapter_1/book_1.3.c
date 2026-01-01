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
