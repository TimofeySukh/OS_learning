#include <stdio.h>
void escape(char s[], char t[]){
    int i, j;
    i = j = 0;
    while (t[i] != '\0'){
        switch (t[i]){

            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;

            case '\t':
                s[j++] = '\\';
                s[j++] = 'n';
                break;

            default:
                s[j++] = t[i];
                break;
        }
        i++;
    }
    s[j] = '\0';
}
int main() {
    // 1. Исходный текст (t) с табами и переносами
    char text_to_escape[] = "Hello\tWorld!\nThis is C programming.";
    
    // 2. Пустой массив (s), куда запишем результат (взял с запасом 100 символов)
    char result[100];

    // 3. Вызываем твою функцию
    escape(result, text_to_escape);

    // 4. Печатаем результат
    printf("Original: %s\n", text_to_escape);
    printf("Escaped:  %s\n", result);

    return 0;
}
