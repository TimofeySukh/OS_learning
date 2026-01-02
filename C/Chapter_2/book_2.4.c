#include <stdio.h>
/*
int main(){
    int a,b,c;
    printf("%d %d %d\n", a, b, c);
}
*/
int global_a; // ЭТА ПЕРЕМЕННАЯ ОБЪЯВЛЕНА ВНЕ main (внешняя)

int main() {
    int local_b; // А эта внутри (автоматическая)
    
    printf("Global (outside): %d\n", global_a);
    printf("Local (inside): %d\n", local_b);
    
    return 0;
}