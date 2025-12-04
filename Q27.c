#include <stdio.h>

int FIBO(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }

    return 0;
}

