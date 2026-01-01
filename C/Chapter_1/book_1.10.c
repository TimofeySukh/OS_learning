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
