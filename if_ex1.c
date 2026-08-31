#include <stdio.h>

int main() {
    int grade;

    printf("Please enter your grade (1-4 in integer): ");
    scanf("%d", &grade);

    if (grade == 4)
        printf("Excellent!\n");
    else if (grade == 3)
        printf("Good\n");
    else if (grade == 2)
        printf("Average\n");
    else if (grade == 1)
        printf("Poor\n"); 
    else
        printf("Invalid input\n");

    return 0;
}