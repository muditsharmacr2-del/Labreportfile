#include <stdio.h>

int g = 10;  // global variable

void show() {
    printf("Inside function, g = %d\n", g);
}

int main() {
    printf("In main, g = %d\n", g);
    show();
    return 0;
}

