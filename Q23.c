#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, odd = 0, even = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Odd: %d\n", odd);
    printf("Even: %d\n", even);

    return 0;
}

