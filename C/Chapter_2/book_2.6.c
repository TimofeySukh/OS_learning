#include <stdio.h>
int lim;
int c;
char s[];
int first(){
    for(int i = 0; i < lim-1; ++i){
        c = getchar();
        if (c == EOF){
            break;
        }
        if (c == '\n'){
            break;
        }
        s[i] = c;
    }
}