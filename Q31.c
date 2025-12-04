#include <stdio.h>

int main() {
    char name[100][50];
    float basic[100], da, gross;

    printf("Enter details of 100 employees:\n");

    for (int i = 0; i < 100; i++) {
        printf("\nEmployee %d Name: ", i + 1);
        scanf("%s", name[i]);

        printf("Employee %d Basic Pay: ", i + 1);
        scanf("%f", &basic[i]);
    }

    printf("\n---- Gross Salary of Employees ----\n");
    for (int i = 0; i < 100; i++) {
        da = 0.52 * basic[i];
        gross = basic[i] + da;

        printf("Name: %s\tGross Salary: %.2f\n", name[i], gross);
    }

    return 0;
}

