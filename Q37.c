#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "This is a test file.\nWelcome to file handling in C.\n");

    fclose(fp);
    printf("File created and data written.\n");

    return 0;
}

