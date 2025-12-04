#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);

    if (bmi < 15)
        printf("Category: Starvation");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Category: Anorexic");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Category: Underweight");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Category: Ideal");
    else if (bmi >= 25 && bmi <= 25.9)
        printf("Category: Overweight");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Obese");
    else if (bmi >= 40)
        printf("Category: Morbidly Obese");

    return 0;
}

