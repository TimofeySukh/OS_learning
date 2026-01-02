#include <stdio.h>

int total_seconds = 3661;

int main(){
    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds.\n", total_seconds, hours, minutes, seconds);
    return 0;
}