#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter point1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter point2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter point3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    if ((x2 - x1)*(y3 - y1) == (y2 - y1)*(x3 - x1))
        printf("Points are Collinear");
    else
        printf("Points are NOT Collinear");

    return 0;
}

