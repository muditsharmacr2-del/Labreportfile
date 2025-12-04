#include <stdio.h>

void count() {
    static int x = 0;  // retains value
    x++;
    printf("x = %d\n", x);
}

int main() {
    count();
    count();
    count();
    return 0;
}

