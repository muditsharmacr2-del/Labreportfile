#include <stdio.h>
#include <math.h>

int main() {
    int L;
    printf("Enter limit: ");
    scanf("%d", &L);

    for(int n = 1; n <= L; n++) {
        int count = 0;

        for(int a = 1; a * a * a < n; a++) {
            for(int b = a; b * b * b < n; b++) {
                if(a*a*a + b*b*b == n)
                    count++;
            }
        }

        if(count == 2)   
            printf("%d is a Ramanujan Number\n", n);
    }
    return 0;
}

