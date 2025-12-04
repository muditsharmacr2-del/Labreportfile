#include <stdio.h>

int main() {
    float population = 100000;

    for(int year = 1; year <= 10; year++) {
        population = population + (population * 0.10);
        printf("Year %d population = %.0f\n", year, population);
    }
    return 0;
}

