#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char line[200];

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("File Lines:\n");

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

