#include <stdio.h>
int trashbox(char s[], char e[]) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '#') continue;
        if (s[i] == '.') break;
        e[j] = s[i];
        j++;
    }
    e[j] = '\0';
}
int main() {
    char source[] = "H#e#l#l#o#.# This should be ignored";
    char result[100]; // Массив для чистого текста

    trashbox(source, result);

    printf("Source: %s\n", source);
    printf("Result: %s\n", result);

    return 0;
}