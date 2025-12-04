#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void printComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\nFirst Complex Number: ");
    printComplex(c1);

    printf("Second Complex Number: ");
    printComplex(c2);

    printf("\nAddition: ");
    printComplex(sum);

    printf("Subtraction: ");
    printComplex(diff);

    return 0;
}

