// arith.c
#include<arith.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0)
        return 0;
    return a / b;
}
