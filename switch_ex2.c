#include <stdio.h>

int main() {
    char grade;
    printf("Please enter your letter grade: ");
    scanf("%c", &grade);
    switch(grade) {
        case 'A': 
        case 'a': printf("Excellent!\n");
                break;
        case 'B': 
        case 'b': printf("Good\n");
                break;
        case 'C': 
        case 'c': printf("Average\n");
                break;
        case 'D': 
        case 'd': printf("Poor\n");
                break;
        default: printf("Invalid intput\n");
    }
    return 0;
}