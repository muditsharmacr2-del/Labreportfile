#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0/5.0) + 32;

    printf("Fahrenheit = %.2f", f);
    return 0;
}

