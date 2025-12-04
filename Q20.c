#include <stdio.h>

int main() {
    {
        int a = 10;
        printf("Inside block, a = %d\n", a);
    }
    // printf("%d", a); // invalid: a only exists inside block

    return 0;
}

