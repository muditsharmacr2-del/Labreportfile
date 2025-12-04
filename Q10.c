#include <stdio.h>

int main() {
    int year, leap, normal, total, day;

    printf("Enter year: ");
    scanf("%d", &year);

    leap = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    normal = (year - 1) - leap;

    total = normal * 365 + leap * 366;
    day = total % 7;

    printf("1 January %d is: ", year);

    switch(day) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
    }

    return 0;
}

