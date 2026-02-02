#include <stdio.h>
#include <string.h>
void reverser(char s[], int left, int right) {
    if (left >= right) {
        return;
    }
    char temp;
    temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    reverser(s, left + 1, right - 1);
}
void reverse(char s[]) {
    int len = strlen(s);
    reverser(s, 0, len - 1);
}
int main() {
    char s[] = "hello world";
    reverser(s, 0, 10);

    printf("%s\n", s);
    return 0;
}