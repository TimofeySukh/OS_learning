#include <stdio.h>
/* strindex: вычисляет место t в s или выдает -1, если t нет в s */
int strindex (char s[], char t[]) {
    int i, j, k;
    int last_pos = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
            last_pos = i;
    }
    if (last_pos != -1)
        return last_pos;
    return -1;
}
int main() {
    char s1[] = "banana";
    char t1[] = "ana";
    char s2[] = "could ould ould";
    char t2[] = "ould";

    printf("Test 1 %d\n", strindex(s1, t1));
    printf("Test 2 %d\n", strindex(s2, t2));
    printf("Test 3 %d\n", strindex(s1, "xyz"));

    return 0;
}