#include <stdio.h>

int main() {
    char buf[50];
    int count = 0;
    // Create a file file_io_test.txt with the writing mode
    FILE* fp = fopen("file_io_test.txt", "w");

    printf("Please enter students' information in each line\n"
           "Format: Name Major GPA (Ctrl + D to terminate the prog.)\n");
    while (fgets(buf, 49, stdin) != NULL) {
        //printf("%s", buf);
        //fputs(buf, fp);
        count++;
        fprintf(fp, "%d %s", count, buf);
    }

    // You open the file, you close it
    fclose(fp);
    return 0;
}