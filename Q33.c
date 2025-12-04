#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    // Store your present address (example: home address)
    strcpy(addr.home_address, "Sector 12, Delhi");

    printf("Present Address: %s\n", addr.home_address);

    return 0;
}

