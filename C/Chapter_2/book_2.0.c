#include <stdio.h>
const int MAX_RAM = 4096;

enum SystemStatus {
    BOOTING,
    RUNNING,
    HALTED
};

unsigned int packet_count;

int main(){
    enum SystemStatus current_status = HALTED;
    printf("System status: %d\n", current_status);
    packet_count = -1;
    printf("Packet count: %u\n", packet_count);
    return 0;
}