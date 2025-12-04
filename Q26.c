#include <stdio.h>

// Recursive factorial
int FACT_rec(int n) {
    if (n == 0)
        return 1;
    return n * FACT_rec(n - 1);
}

// Non-recursive factorial
int FACT_nonrec(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Invalid! r cannot be greater than n.\n");
        return 0;
    }

    int n_fact = FACT_rec(n);
    int r_fact = FACT_rec(r);
    int nr_fact = FACT_rec(n - r);

    int C = n_fact / (r_fact * nr_fact);

    printf("Using recursion: %dC%d = %d\n", n, r, C);
    printf("Using loop FACT: %dC%d = %d\n",
           n, r,
           FACT_nonrec(n) / (FACT_nonrec(r) * FACT_nonrec(n - r)));

    return 0;
}

