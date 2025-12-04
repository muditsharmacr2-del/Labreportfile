#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter order of matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter order of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. Incompatible sizes.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter matrix A elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B elements:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Initialize C
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    // Multiply
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Print matrices
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("\nResultant Matrix C (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

