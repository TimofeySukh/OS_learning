#include <stdio.h>

int main() {
    register int i; // Просим регистр для счетчика
    register int count = 0; // Просим регистр для суммы

    for (i = 0; i < 1000000000; i++) {
        count += 1;
    }
    printf("Done: %d\n", count);
    return 0;
}
// короче вывод что на моем процессоре он автоматически кладет в регистр типа разницы нету с регистром и без
