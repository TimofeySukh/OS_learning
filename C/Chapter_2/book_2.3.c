#include <stdio.h>
/*
int main(){
    enum errors { DISK_ERR = 1, MEM_ERR, CPU_ERR };
    int hex = 0xFF;
    printf("Hex 0xFF in decimal is: %d\n", hex);
    printf("%c\n", 65);
    char os[] = "Linux";
    printf("Operating System: %lu\n", sizeof(os));

}
*/
int main(){
    printf("\x70\x72\x69\x6E\x74\50\42%c%c%c%c%c%c%c%c%c%c%c\42\51\n", 0b1101000, 0b1100101, 0b1101100, 0b1101100, 0b1101111, 0b100000, 0b1110111, 0b1101111, 0b1110010, 0b1101100, 0b1100100);/*
    printf("%c\n", );
    printf("%c\n", );
    */
}