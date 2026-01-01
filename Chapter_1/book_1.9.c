#include <stdio.h>

// 1. Прототип функции, которая ничего не возвращает
void try_to_change(int x);

int main() {
    int a = 10;

    printf("Main до вызова: %d\n", a);

    try_to_change(a); // Передаем копию

    printf("Main после вызова: %d\n", a);

    return 0;
}

// 2. Реализация функции
void try_to_change(int x) {
    x = x + 500; // Мучаем копию
    printf("Внутри функции: %d\n", x);
}
