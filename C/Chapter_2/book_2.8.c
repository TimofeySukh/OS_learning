/*

#include <stdio.h>

void remove_spaces(char s[]) {
    int i, j;

    // j - это индекс, куда мы будем ПЕРЕЗАПИСЫВАТЬ строку
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {

            // ТВОЯ ЗАДАЧА:
            // Запиши символ s[i] в позицию s[j]
            // и СРАЗУ УВЕЛИЧЬ j на единицу (используй j++)
            s[j++] = s[i++];
        }
    }

    // В конце ПУСТУЮ КЛЕТКУ j нужно закрыть концом строки
    s[j] = '\0';
}

int main() {
    char str[] = "H e l l o W o r l d";
    remove_spaces(str);
    printf("'%s'\n", str); // Должно вывести 'HelloWorld'
    return 0;
}
*/
#include <stdio.h>
void keep_digits(char s[]) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            s[j++] = s[i]   ;
        }
    }
    s[j] = '\0';
}
int main() {
    char s[] = "Tel: +7 (999) 123-45-67";
    keep_digits(s);
    printf("'%s'\n", s);
    return 0;
}