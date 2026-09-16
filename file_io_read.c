#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    char buf[50];
    int count = 0;
    char name[30];
    char major[10];
    int c;
    float gpa;
    float sum = 0;
    int check;
    FILE *fp = fopen("file_io_test.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Error: %d, %s\n", errno, strerror(errno));
        return 1;
    }
    printf("file opened\n");
    while (fgets(buf, 50, fp) != NULL) {
        check = sscanf(buf, "%d %s %s %f", &c, name, major, &gpa);
        if (check != 4) {
            fprintf(stderr, "Error in reading");
            return 1;
        }
        sum = sum + gpa;
        count++;
    }
    printf("There are %d students in the file\n", count);
    printf("The average gpa is %.2f\n", sum / count);
    fclose(fp);
    return 0;
}