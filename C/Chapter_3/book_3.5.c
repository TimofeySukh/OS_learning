#include <stdio.h>

int expand(char s1[], char s2[]) {
    int i, j, c;
    i = j = 0;
    while (s1[i] != '\0') {
        if (s1[i] == '-' && i > 0 && s1[i+1] != '\0') {
            for (c = s1[i-1] +1; c <= s1[i+1] - 1; c++) {
                s2[j++] = c;
            }
        } else {
            s2[j++] = s1[i];
        }
        i++;
    }
    s2[j] = '\0';
}
int main() {
    char input[] = "1-9 a-z hi man";
    char result[100];


    expand(input, result);

    printf("%s", result);

    return 0;
}