// main.c
#include <stdio.h>
#include "arith.h"

int main() {
    int a = 20, b = 10;

    printf("Add = %d\n", add(a, b));
    printf("Sub = %d\n", sub(a, b));
    printf("Mul = %d\n", mul(a, b));
    printf("Div = %.2f\n", divide(a, b));

    return 0;
}

