#include <stdio.h>

int main() {
    int L = 20;

    for (int a = 1; a <= L; a++) {
        for (int b = a + 1; b <= L; b++) {
            for (int c = 1; c <= L; c++) {
                for (int d = c + 1; d <= L; d++) {
                    if (a*a*a + b*b*b == c*c*c + d*d*d) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a*a*a + b*b*b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

