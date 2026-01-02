#include <stdio.h>
int htoi(char s[]){
    int res = 0;
    int weight;
    for(int i = 2; s[i] != '\0'; ++i){
        if (s[i] >= '0' && s[i] <= '9'){
            weight = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'z'){
            weight = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'Z'){
            weight = s[i] - 'A' + 10;
        } else {
            break;
        }
        res = 16 * res + weight;
    }
    return res;
}

int main(){
    char varib[] = "0x1A";
    printf("%d\n",htoi(varib));
}