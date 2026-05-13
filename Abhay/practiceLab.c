#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("multi.txt", "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n')
            count++;
    }

    fclose(fp);

    printf("Number of lines = %d\n", count + 1);

    return 0;
}
