#include <stdio.h>

void test() {
    int x = 5;   // local variable
    printf("Inside test, x = %d\n", x);
}

int main() {
    test();
    // printf("%d", x);  // invalid: x not accessible here
    return 0;
}

