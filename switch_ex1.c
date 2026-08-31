#include <stdio.h>

int main() {
    int grade;

    printf("Please enter your grade (1-4 in integer): ");
    scanf("%d", &grade);

    switch(grade) {
        case 4: printf("Excellent!\n");
                break;
        case 3: printf("Good\n");
                break;
        case 2: printf("Average\n");
                break;
        case 1: printf("Poor\n");
                break;
        default: printf("Invalid intput\n");
    }
    return 0;
}