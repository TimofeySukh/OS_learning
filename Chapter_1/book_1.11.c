#include <stdio.h>
int app(int size);
int close_app (int size);
int ram_available = 1024;
int apps_open = 0;
int main() {
    app(400);
    app(600);
    close_app(400);
    printf("ram_available = %d\n", ram_available);
    printf("how many apps are open= %d\n", apps_open);
    return 0;
}
int app(int size) {
    if (size > ram_available) {
        return 0;
    }
    else {
        apps_open = apps_open + 1;
        ram_available = ram_available - size;
        return 1;
    }
}
int close_app(int size) {
    if (apps_open > 0) {
        apps_open = apps_open - 1;
        ram_available = ram_available + size;
        return 1;
    } else {
        return 0;
    }
}
