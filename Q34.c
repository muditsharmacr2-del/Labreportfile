#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Integer value: %d, Pointer: %p, Value via pointer: %d\n", a, (void*)p1, *p1);
    printf("Float value: %.2f, Pointer: %p, Value via pointer: %.2f\n", b, (void*)p2, *p2);
    printf("Char value: %c, Pointer: %p, Value via pointer: %c\n", c, (void*)p3, *p3);

    return 0;
}

