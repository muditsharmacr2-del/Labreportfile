#include <stdio.h>

int main() {
    int x = 10;
    float y = 3.14;
    char z = 'A';

    int *pi = &x;
    float *pf = &y;
    char *pc = &z;

    printf("Original Addresses:\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n", (void*)pc);

    pi++; pf++; pc++;
    printf("\nAfter Increment:\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n", (void*)pc);

    pi--; pf--; pc--;
    printf("\nAfter Decrement (Back to original):\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n", (void*)pc);

    return 0;
}

