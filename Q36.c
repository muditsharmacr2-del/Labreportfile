#include <stdio.h>

void update(int *a, float *b, char *c) {
    *a = *a + 5;
    *b = *b * 2;
    *c = 'Z';
}

int main() {
    int x = 10;
    float y = 4.5;
    char z = 'A';

    printf("Before update: x=%d, y=%.2f, z=%c\n", x, y, z);

    update(&x, &y, &z);

    printf("After update:  x=%d, y=%.2f, z=%c\n", x, y, z);

    return 0;
}

